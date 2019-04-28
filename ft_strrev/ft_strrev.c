/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 09:46:51 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/08 09:58:37 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while(*str++)
		c++;
	return (c);
}

char *ft_strrev(char *str)
{
	char *rev;
	int len;
	int i;

	i = 0;
	len = ft_strlen(str) - 1;
	rev = str;
	while (i < len)
	{
		ft_swap(&rev[i], &rev[len]);
		i++;
		len--;
	}
	return (rev);
}
