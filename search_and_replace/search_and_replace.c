/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:35:32 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/08 09:42:53 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while(*str++)
		c++;
	return(c);
}

void	search(char *str, char *s1, char *s2)
{
	if (ft_strlen(s1) != 1 || ft_strlen(s2) != 1)
		return;
	while(*str)
	{
		if (*str == *s1)
			*str = *s2;
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 4)
		search(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
}
