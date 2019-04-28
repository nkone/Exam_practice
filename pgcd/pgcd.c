/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:48:22 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/28 13:53:35 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		pgcd(unsigned int a, unsigned int b) {
	if (!a || !b) return (1);

	while (1) {
		(a > b) && (a -= b);
		(b > a) && (b -= a);
		if (a == b) return (a);
	}
	return (1);
}

int main(int argc, char *argv[]) {
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
}
