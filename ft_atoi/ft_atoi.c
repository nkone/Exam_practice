/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 18:13:15 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/05 18:20:01 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	is_space(char c) {
	return (c >= 9 && c <= 13 || c == 32);
}

int		ft_atoi(const char *str) {
	while (is_space(*str)) str++;
	int sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') && str++;
	long int n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	return (int)(n * sign);
}
