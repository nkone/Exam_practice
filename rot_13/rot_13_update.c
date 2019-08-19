/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:01:07 by phtruong          #+#    #+#             */
/*   Updated: 2019/08/12 19:31:36 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int c = 0;

	while (*str++)
		c++;
	return (c);
}

char rot_13_char(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (c + 13);
	if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (c - 13);
	return (c);
}

ssize_t rot_13_(char *str, int size)
{
	char buff[size + 1];
	int idx = 0;
	
	while (*str)
		buff[idx++] = rot_13_char(*str++);
	buff[idx] = '\0';
	return (write(1, buff, size));
}

ssize_t rot_13(char *str)
{
	int size;

	size = ft_strlen(str);
	return (rot_13_(str, size));
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
