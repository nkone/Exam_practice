/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:37:30 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/29 18:52:04 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putchar(char c) { write(1, &c, 1); }
void 	ft_putstr(char *str) { while(*str)ft_putchar(*str++);}
int		is_space(char c) {
	return ((c >= 9 && c <= 13) || (c == ' '));
}
void	ft_putword(char *str) {
	while (is_space(*str)) str++;
	while (*str && !is_space(*str))
		ft_putchar(*str++);
}

int	ft_strlen(char *str) {
	int c = 0;
	if (!str)
		return (0);
	while (*str++)
		c++;
	return (c);
}

void	inter_test(int *tab, int *tab2) {
	int i = 0;
	while (tab[i]) {
		if (tab[i] == tab2[tab[i]])
			ft_putchar(tab[i]);
		i++;
	}
}

int		is_dup(char *s, int index, char c) {
	int i = 0;
	while (i < index) {
		if (s[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int		check_char(char *s, char c) {
	int i = 0;
	if (!s)
		return (0);
	while (s[i]) {
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1, char *s2) {
	int i = 0;

	while (s1[i]) {
		if (!is_dup(s1, i, s1[i]) && check_char(s2, s1[i]))
			ft_putchar(s1[i]);
		i++;
	}
}

void	inter_driver(char *s1, char *s2)
{
	int8_t tab[128];
	int8_t tab_order[128];
	int8_t tab2[128];
	int8_t i = 0;
	int8_t c = 0;

	for (i = 0; *s1; s1++) {
		c = *s1;
		if (tab[c] != c) {
			tab[c] = c;
			tab_order[i++] = tab[c];
		}
	}
	for (; *s2; s2++) {
		c = *s2;
		if (tab2[c] != c)
			tab2[c] = c;
	}
	for(i = 0; tab_order[i] ; i++)
		if (tab_order[i] == tab2[tab_order[i]])
			ft_putchar(tab_order[i]);
}

int main(int argc, char *argv[]) {
	if (argc == 3)
		inter_driver(argv[1], argv[2]);
	ft_putchar('\n');
}

