/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 14:41:55 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/13 15:25:05 by phtruong         ###   ########.fr       */
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
	if (!count)
		return NULL;
	char **arr = (char **)malloc(sizeof(char *)* count + 1);
	arr[count] = NULL;
	for (int i = 0; arr[i]; i++) {
		while (is_space(*str)) str++;
		char *pstr = str;
		while (*str && !is_space(*str)) str++;
		int len = (int)(str - pstr);
		arr[i] = (char *)malloc(sizeof(char)*len + 1);
		for (int j = 0; j < len; j++)
			arr[i][j] = *pstr++;
		arr[i][len] = '\0';
	}
	return (arr);
}
