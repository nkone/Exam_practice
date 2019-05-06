/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 18:21:05 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/05 18:34:55 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		*ft_range(int start, int end) {
	int len = (start > end) ? (start - end + 1) : (end - start + 1);
	int	*tab = (int *)malloc(sizeof(int) * len);
	while (len--)
		tab[len] = (start > end) ? end++ : end--;
	return (tab);
}

/*
int main(int argc, char *argv[]) {
	if (argc == 3) {
		int start, end;
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		int *tab = ft_range(start, end);
		int size = (start > end) ? (start - end + 1) : (end - start + 1);
		int i = 0;
		while (i < size) {
			printf("%d ", tab[i]), i++;
		}
	}
	printf("\n");
}*/
