/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:09:13 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/06 14:38:52 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet) {
	unsigned int i = 0;
	int bits = 8;

	while (octet) {
		i |= (octet & 1);
		octet >>= 1;
		bits--;
		if (!octet)
			break;
		i <<= 1;
	}
	i <<= bits;
	return (i);
}
