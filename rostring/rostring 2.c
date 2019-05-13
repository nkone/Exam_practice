/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:52:44 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 13:08:09 by phtruong         ###   ########.fr       */
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

void	rostring(char *str) {
	char *pstr = str;
	while (is_space(*str)) str++;
	while (*str && !is_space(*str)) str++;
	while (is_space(*str)) str++;
	int flag = 0;
	while (*str) {
		if (!is_space(*str) && flag)
			ft_putchar (' '), flag = 0;
		if (!is_space(*str))
			ft_putchar(*str);
		if (is_space(*str))
			flag = 1;
		str++;
		if (!*str)
			flag = 1;
	}
	if (flag)
		ft_putchar(' ');
	ft_putword(pstr);
}

int main(int argc, char *argv[]) {
	if (argc > 1)
		rostring(argv[1]);
	ft_putchar('\n');
}

