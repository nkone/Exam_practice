/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 13:33:30 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/28 13:44:36 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(char *a, char *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int		ft_strlen(char *str) {
	int c = 0;
	while (*str++) c++;
	return (c);
}
char	*ft_strrev(char *str) {
	if (!str) return NULL;
	int len = ft_strlen(str) - 1;
	char *dest = str;
	if (len > 1)
		for(int i = 0; i < len; i++, len--)
			ft_swap(&dest[i], &str[len]);	
	return (dest);
}
