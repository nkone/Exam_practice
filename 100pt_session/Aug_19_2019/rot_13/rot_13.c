/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:46:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/08/19 14:01:23 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	rot_char_13(char c)
{
	c = (c >= 'a' && c <= 'm') ? (c + 13) :
		(c >= 'A' && c <= 'M') ? (c + 13) :
		(c >= 'n' && c <= 'z') ? (c - 13) :
		(c >= 'N' && c <= 'Z') ? (c - 13) :
		c;
	return (c);
}

ssize_t	rot_str_13(char *str)
{
	int len  = 0;

	len = ft_strlen(str);

	char buff[len];
	
	for (int idx = 0; *str; str++, idx++)
		buff[idx] = rot_char_13(*str);
	return write(1, buff, len);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rot_str_13(argv[1]);
	write(1, "\n", 1);
}
	
