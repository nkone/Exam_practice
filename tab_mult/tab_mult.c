/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 13:12:39 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 13:28:27 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}
void	ft_putstr(char *str){
	while (*str) ft_putchar(*str++);
}
int space(char c){
	return ((c >= 9 && c <= 13) || c == 32);
}
int	ft_atoi(char *str){
	while (space(*str)) str++;
	int sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') && str++;
	long int n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	return ((int)n * sign);
}

void	ft_putnbr(int n){
	if (n >= 10)
		ft_putnbr(n / 10), ft_putchar(n % 10 + '0');
	else
		ft_putchar(n % 10 + '0');
}

int main(int argc, char *argv[]){
	if (argc == 2){
		int n = 0;
		int m = ft_atoi(argv[1]);
		while (++n < 10){
			ft_putnbr(n);
			ft_putstr(" x ");
			ft_putnbr(m);
			ft_putstr(" = ");
			ft_putnbr((n * m)); 
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
}
		
