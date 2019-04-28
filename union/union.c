/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:14:29 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/01 14:32:41 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	dup_char(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;
	i = 0;
	j = 0;
	while(s1[i])
	{
		if(!(dup_char(s1, s1[i], i)))
			ft_putchar(s1[i]);
		i++;
	}

	while(s2[j])
	{
		if (!(dup_char(s1, s2[j], i)) && !(dup_char(s2, s2[j], j)))
			ft_putchar(s2[j]);
		j++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return(0);
}
