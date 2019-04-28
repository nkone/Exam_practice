/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:26:16 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 18:32:24 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10), ft_putchar(n % 10 + '0');
	else
		ft_putchar(n % 10 + '0');
}

int main(int argc, char *argv[])
{
	ft_putnbr(argc - 1);
	ft_putchar('\n');
	argv[0]++;
}
