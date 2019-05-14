/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 14:41:55 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 19:08:10 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		is_space(char c) {
	return ((c >= 9 && c <= 13) || (c == ' '));
}

int		count_words(char *s) {
	int wd = 0;
	if (!s)
		return (0);
	while (*s) {
		while (is_space(*s)) s++;
		if (*s && !is_space(*s)) wd++;
		while (*s && !is_space(*s)) s++;
		if (!*s)
			break;
		s++;
	}
	return (wd);
}

char **ft_split(char *str) {
	int count = count_words(str);
	char **arr = (char **)malloc(sizeof(char *)* count + 1);
	if (!arr)
		return (NULL);
	arr[count] = NULL;
	for (int i = 0; i < count; i++) {
		while (is_space(*str)) str++;
		char *pstr = str;
		while (*str && !is_space(*str)) str++;
		int len = (int)(str - pstr);
		arr[i] = (char *)malloc(sizeof(char)*len + 1);
		if (!arr[i])
			return (NULL);
		for (int j = 0; j < len; j++)
			arr[i][j] = *pstr++;
		arr[i][len] = '\0';
	}
	return (arr);
}
