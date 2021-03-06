/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 09:20:58 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/06 09:28:29 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		max(int *tab, unsigned int len) {
	unsigned int i = 0;
	int max = 0;

	if (!len)
		return 0;
	max = tab[i];
	while (++i < len) {
		if (tab[i] > max)
			max = tab[i];
	}
	return (max);
}
