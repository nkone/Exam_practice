/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 11:58:19 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/06 12:33:59 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		is_space(char c) {
	return ((c >= 9 && c <= 13) || c == 32);
}

int		valid_base(char c, int base) {
	char *l_base = "0123456789abcdef";
	char *u_base = "0123456789ABCDEF";
	int i = 0;
	while (i < base) {
		if (c == l_base[i] || c == u_base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(const char *str, int str_base) {
	if (str_base < 2 || str_base > 16)
		return (0);
	while (is_space(*str)) str++;
	int sign = (*str == '-') ? -1: 1;
	(*str == '-' || *str == '+') && str++;
	long int n = 0;
	while (valid_base(*str, str_base) != -1)
		n = n * str_base + valid_base(*str++, str_base);
	return (int)(n * sign);
}
