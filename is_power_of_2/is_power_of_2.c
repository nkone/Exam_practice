/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:11:22 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/29 12:18:47 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n) {
	if (n == 1) return (1);
	if (n == 0) return (0);
	while (n) {
		if (n == 1) return (1);
		if (n % 2) return 0;
		n/=2;
	}
	return (0);
}
