/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 14:41:22 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/28 16:07:55 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		opt(int a, int b, char op) {
	int res = 0;
	res =	
		(op == '+') ? (a + b) :
		(op == '-') ? (a - b) :
		(op == '/') ? (a / b) :
		(op == '*') ? (a * b) :
		(op == '%') ? (a % b) :
		0;
	return (res);
}

int		isnum(char c) { return (c >= '0' && c <= '9'); }

void	skip_num(int *i, char *s) {
	int j = *i;
	while (isnum(s[j])) j++;
	*i = j;
}

int		rpn_calc(char *s) {
	int tab[4242];
	int i = -1;
	int j = 0;

	while (s[++i]) {
		if ((isnum(s[i])) || ((s[i] == '-' || s[i] == '+') && (isnum(s[i+1])))){
			tab[j++] = atoi(&s[i++]);
			skip_num(&i, s);
		}
		if (((s[i] == '-' || s[i] == '+') && (s[i+1] == ' ' || s[i+1] == '\0')) ||
			s[i] == '/' || s[i] == '*' || s[i] == '%') {
			if (j < 1 || ((s[i] == '%' || s[i] == '/') && tab[j - 1] == 0))
				return (printf("Error\n"));
			tab[j - 2] = opt(tab[j - 2], tab[j - 1], s[i]);
			j--;
		}
	}
	if (j != 1) return (printf("Error\n"));
	return (printf("%d\n", tab[0]));
}

int main (int argc, char *argv[]){
	if (argc != 2)
		return ((printf("Error\n")));
	rpn_calc(argv[1]);
}
