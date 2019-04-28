/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:59:01 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/01 15:19:50 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	i = 0;
	while (++i < size)
	{
		if (tab[i] < tab[i-1])
		{
			ft_swap(&tab[i], &tab[i - 1]);
			i = 0;
		}
	}
}
