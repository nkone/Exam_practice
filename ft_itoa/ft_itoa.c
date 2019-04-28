/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:36:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 18:51:00 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define abs(n) (n < 0) ? -n : n
char *tab = "0123456789";

char	*ft_itoa(int nbr){
	int sign = (nbr < 0) ? 1 : 0;
	int size = (sign) ? 2 : 1;
	if (nbr == -2147483648)
		return ("-2147483648");
	int temp = nbr;
	while (temp /= 10) size++;
	char *str = (char *)malloc(sizeof(char) * size + 1);
	str[size] = '\0', size--;
	(sign) && (str[0] = '-');
	str[size] = tab[abs((nbr % 10))];
	while (nbr /= 10) str[--size] = tab[abs((nbr % 10))];
	return (str);
}
