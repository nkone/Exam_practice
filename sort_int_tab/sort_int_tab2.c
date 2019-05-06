/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:11:54 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/29 18:20:43 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void	sort_int_tab(int *tab, unsigned int size) {
	int i = 0;

	int len = size;
	while (i < len -1) {
		if (tab[i + 1] < tab[i]) {
			ft_swap(&tab[i + 1], &tab[i]);
			i = 0;
		}
		else
			i++;
	}
}
