/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:02:11 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/29 12:08:18 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str) {
	int c = 0;
	while (*str++) c++;
	return (c);
}

void ft_putchar(char c) { write(1, &c, 1); }

int main(int argc, char *argv[]) {
	if (argc == 4) {
		int ls1 = ft_strlen(argv[2]);
		int ls2 = ft_strlen(argv[3]);
		if (ls1 == 1 && ls2 == 1) {
			while (*argv[1]) {
				if (*argv[1] == *argv[2]) {
					ft_putchar(*argv[3]), argv[1]++; 
				}
				ft_putchar(*argv[1]++); 
			}
		}
	}
	ft_putchar('\n');
}
