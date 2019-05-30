/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 18:06:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 18:10:20 by phtruong         ###   ########.fr       */
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

void	letter(char c) {
	c = 
		(c >= 'a' && c <= 'm') ? (c + 13) :
		(c >= 'A' && c <= 'M') ? (c + 13) :
		(c >= 'n' && c <= 'z') ? (c - 13) :
		(c >= 'N' && c <= 'Z') ? (c - 13) :
		c;
	ft_putchar(c);
}


int main(int argc, char *argv[]) {
	if (argc == 2)
		while (*argv[1])
			letter(*argv[1]++);
	ft_putchar('\n');
}
