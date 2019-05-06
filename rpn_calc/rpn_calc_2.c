/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 18:53:09 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/05 19:10:09 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		is_num(char c) {
	return (c >= '0' && c <= '9');
}
void	skip_num(char *s, int *idx) {
	int j = *idx;
	while(is_num(s[j]))
		j++;
	*idx = j;
}

int		do_op(int a, int b, char c) {
	int res = 
		(c == '+') ? (a + b) :
		(c == '-') ? (a - b) :
		(c == '/') ? (a / b) :
		(c == '*') ? (a * b) :
		(c == '%') ? (a % b) :
		0;
	return res;
}
int		rpn_calc(char *s) {
	int i = -1;
	int j = 0;
	int	tab[4242];

	while (s[++i]) {
		if (is_num(s[i]) || ((s[i] == '+' || s[i] == '-') && is_num(s[i+1]))) {
			tab[j++] = atoi(&s[i++]);
			skip_num(s, &i);
		}
		if (((s[i] == '+' || s[i] == '-') && (s[i+1] == ' ' || s[i+1] == '\0')) || s[i] == '*' || s[i] == '/' || s[i] == '%') {
			if (j < 1 || ((s[i] == '/' || s[i] == '%') && tab[j-1] == 0))
				return (printf("Error\n"));
			tab[j - 2] = do_op(tab[j - 2], tab[j - 1], s[i]);
			j--;
		}
	}
	if (j != 1)
		return (printf("Error\n"));
	return (printf("%d\n", tab[0]));
}


int main(int argc, char *argv[]) {
	if (argc != 2)
		return (printf("Error\n"));
	rpn_calc(argv[1]);
}
