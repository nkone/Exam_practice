/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 19:39:04 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/29 19:46:40 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) { write(1, &c, 1); }
void	ft_putstr(char *str) { while (*str) ft_putchar(*str++); }

int		open_bracket(char c){
	return (c == '(' || c == '{' || c == '[');
}

int		close_bracket(char c){
	return (c == ')' || c == '}' || c == ']');
}

int		match_bracket(char a, char b) {
	return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

int		brackets(char *s) {
	int i = 0;
	char tab[4242];
	while (*s) {
		if (open_bracket(*s))
			tab[i++] = *s;
		if (close_bracket(*s))
			if (!match_bracket(tab[--i], *s))
				return 0;
		s++;
	}
	return (!i);
}

int main(int argc, char *argv[]) {
	int i = 1;

	if (argc > 1) {
		while (i++ < argc) {
			if (brackets(argv[i-1]))
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
		}
	}
	else
		ft_putchar('\n');
}


