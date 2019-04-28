/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:27:13 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/27 20:40:18 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1);}

void ulstr(char c) {
	c = (c >= 'A' && c <= 'Z') ? (c + 32) :
		(c >= 'a' && c <= 'z') ? (c - 32) : 
		c;
	ft_putchar(c);
}

int main(int argc, char *argv[]) {
	if (argc == 2)
		while (*argv[1]) ulstr(*argv[1]++);
	ft_putchar('\n');
}
