/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:37:44 by phtruong          #+#    #+#             */
/*   Updated: 2019/08/12 20:33:44 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# define BUFF_SIZE 128

void ft_bzero(void *s, size_t n)
{
	size_t idx = 0;
	unsigned char *ps;

	ps = (unsigned char *)s;
	while (idx < n)
		ps[idx++] = 0;
}

void	ft_union(char *str, char *str2)
{
	char tab[BUFF_SIZE];
	char *pstr = str;
	char unique_str[BUFF_SIZE + 1];
	int idx = 0;

	ft_bzero(tab, BUFF_SIZE);
	ft_bzero(unique_str, BUFF_SIZE);
	while (*pstr)
	{
		int i = (int)*pstr;
		if (tab[i] != *pstr)
		{
			tab[i] = *pstr;
			unique_str[idx++] = tab[i];
		}
		pstr++;	
	}
	pstr = str2;
	while (*pstr)
	{
		int i = (int)*pstr;
		if (tab[i] != *pstr)
		{
			tab[i] = *pstr;
			unique_str[idx++] = tab[i];
		}
		pstr++;
	}
	unique_str[idx] = '\0';
	write(1, unique_str, idx);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
		
