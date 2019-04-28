/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:52:03 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 18:14:43 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str){
	int c = 0;
	while (*str++) c++;
	return (c);
}
char	*ft_strdup(char *src){
	if (!src)
		return (NULL);
	int size = ft_strlen(src);
	char *str = (char *)malloc(sizeof(char)*size + 1);
	str[size] = '\0';
	for (int i = 0; *src; i++, src++) str[i] = *src;
	return (str);
}
