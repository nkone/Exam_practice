/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 19:50:35 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 20:04:47 by phtruong         ###   ########.fr       */
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

int is_prime(int n) {
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	int i = 2;
	while (i < n) {
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime(int n) {
	int i = 2;
	int res = 0;
	while (i <= n) {
		if (is_prime(i))
			res += i;
		i++;
	}

	return (res);
}

int		ft_atoi(char *str) {
	int n = 0;
	int sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') && str++;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	return (n * sign);
}

void	ft_putnbr(int n) {
	if (n >= 10)
		ft_putnbr(n / 10), ft_putchar(n % 10 + '0');
	else
		ft_putchar(n%10 + '0');
}


int main(int argc, char *argv[]) {
	if (argc == 2) {
		int n = ft_atoi(argv[1]);
		if (n < 0)
			ft_putnbr(0);
		else
			ft_putnbr(add_prime(n));
	}
	else
		ft_putnbr(0);
	ft_putchar('\n');
}


