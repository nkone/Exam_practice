/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:56:30 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/28 14:23:54 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_abs(int n) {
	return ((n < 0) ? -n : n);
}
char 	*ft_itoa(int nbr) {
	int temp = nbr;
	int sign = (nbr < 0) ? 1 : 0;
	int size = (sign) ? 2 : 1;
	while (temp /= 10) size++;
	char *num = (char *)malloc(sizeof(char)*size + 1);
	num[size] = '\0', size--;
	(nbr < 0) && (num[0] = '-');
	num[size--] = (ft_abs(nbr % 10)+ '0'), nbr/= 10;
	for (; nbr; size--, nbr /= 10)
		num[size] = (ft_abs(nbr % 10) + '0');
	return (num);
}
