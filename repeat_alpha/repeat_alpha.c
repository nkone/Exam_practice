/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:48:40 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/27 21:00:29 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) { write(1, &c, 1); }

int	count(char c) {
	int count = (c >= 'a' && c <= 'z') ? (c - 'a' + 1) :
		(c >= 'A' && c <= 'Z') ? (c - 'A' + 1) : 1;
	return (count);
}

void	letter(char c) {
	int n = count(c);
	while (n--) ft_putchar(c);
}

int main(int argc, char *argv[]) {
	if (argc == 2)
		while (*argv[1])
			letter(*argv[1]++);
	ft_putchar('\n');
}
	


