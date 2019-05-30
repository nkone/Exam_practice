/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:34:53 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 15:35:37 by phtruong         ###   ########.fr       */
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

int main(int argc, char *argv[]) {
	if (argc == 2)
		ft_putword(argv[1]);
	ft_putchar('\n');
}
