/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:49:28 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 13:03:08 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int space(char c){
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str){
	while (space(*str)) str++;
	int sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') && str++;
	long int n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	return ((int)n * sign);
}
