/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 14:40:23 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 17:40:51 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
# define abs(n) ((int)n < 0) ? -n : n

char *tab = "0123456789ABCDEF";

int		ft_abs(int n){
	return (n < 0) ? -n : n;
}
char	*ft_itoa_base(int value, int base)
{
	if (base < 2 || base > 16)
		return (NULL);
	int sign = (value < 0 && base == 10) ? 1 : 0;
	int tmp = value;
	int size = (sign) ? 2: 1;
	while (tmp /= base) size++;
	char *str = (char *)malloc(sizeof(char)*size + 1);
	(sign) && (str[0] = '-');
	str[size] = '\0', size--;
	str[size] = tab[ft_abs(value % base)]; 
	while (value/=base) str[--size] = tab[ft_abs(value % base)];
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
}
