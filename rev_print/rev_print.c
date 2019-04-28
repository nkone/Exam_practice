/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:46:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 17:49:46 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

int		ft_strlen(char *str){
	int c = 0;
	while (*str++) c++;
	return (c);
}

int main(int argc, char *argv[]){
	if (argc == 2){
		int len = ft_strlen(argv[1]) - 1;
		while (argv[1][len]) ft_putchar(argv[1][len--]);
	}
	ft_putchar('\n');
}
