/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:20:59 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/08 10:32:38 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int len;
	int *tab;

	len = (end > start) ? (end - start + 1) : (start - end + 1);
	tab = (int *)malloc(sizeof(int) * len);
	while (len--)
	{
		tab[len] = (end > start) ? start++ : start--;
	}
	return (tab);
}
