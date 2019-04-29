/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:40:52 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/29 12:58:00 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	fprime(int n) {
	if (n == 1)
		return (printf("1"));
	int i = 2;
	int flag = 0;
	while (n) {
		if (n % i == 0) {
			if (!flag)
				printf("%d", i);
			if (flag)
				printf("*%d", i);
			n /= i;
			flag = 1;
			if (n == 1) return 0;
		}
		else 
			i++;	
	}
	return (0);
}
	
int main(int argc, char *argv[]) {
	if (argc == 2) {
		fprime(atoi(argv[1]));
	}
	printf("\n");
}
