/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 14:32:12 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 14:40:42 by phtruong         ###   ########.fr       */
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
	while (*str && !is_space(*str))
		ft_putchar(*str++);
}

void	epur_str(char *s) {
	while (is_space(*s)) s++;
	while (*s) {
		ft_putword(s);
		while (*s && !is_space(*s)) s++;
		while(is_space(*s)) s++;
		if (!*s)
			break;
		ft_putchar(' ');
	}
}

int main(int argc, char *argv[]) {
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
}

