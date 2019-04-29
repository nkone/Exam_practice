/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:20:10 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/29 12:31:35 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end) {
	int len = (start > end) ? (start - end + 1) : (end - start + 1);
	int *tab = (int *)malloc(sizeof(int) * len);
	while (len--) {
		tab[len] = (start > end) ? start--: start++;
	}
	return (tab);
}
