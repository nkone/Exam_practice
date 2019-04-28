/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 15:09:44 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/20 15:36:03 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

void	letter(char c){
	c = (c >= 'A' && c <= 'Z') ? ('A' + 'Z' - c) :
		(c >= 'a' && c <= 'z') ? ('a' + 'z' - c) :
		c;
	ft_putchar(c);
}

int main(int argc, char *argv[]){
	if (argc == 2)
		while (*argv[1]) letter(*argv[1]++);
	ft_putchar('\n');
}

