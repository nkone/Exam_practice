/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:00:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/01 14:07:09 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	letter(char c)
{
	c = (c >= 'a' && c <= 'y') ? (c + 1) :
		(c >= 'A' && c <= 'Y') ? (c + 1) :
		(c == 'z' || c == 'Z') ? (c - 25) :
		c;
	ft_putchar(c);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			letter(*argv[1]);
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return(0);
}
