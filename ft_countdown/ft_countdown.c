/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 18:01:47 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 18:02:17 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putchar(char c) { write(1, &c, 1); }
void 	ft_putstr(char *str) { while(*str)ft_putchar(*str++);}
int		is_space(char c) {
	return ((c >= 9 && c <= 13) || (c == ' '));
}
void	ft_putword(char *str) {
	while (is_space(*str)) str++;
	while (*str && !is_space(*str))
		ft_putchar(*str++);
}

int main(void)
{
	ft_putstr("9876543210\n");
}
