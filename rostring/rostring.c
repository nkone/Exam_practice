/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:32:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/08 13:08:49 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str++)
		c++;
	return(c);
}

int	space(char c)
{
	return (c == ' ' || c == '\t');
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

char *first_wd(char *str)
{
	char *word;
	int i;

	i = 0;
	word = (char *)malloc(sizeof(char)*100);
	while (space(*str))
		str++;
	while (*str && !space(*str))
	{
		word[i] = *str;
		i++;
		str++;
	}
	word[i] = '\0';
	return(word);
}

void	rostring(char *str)
{
	char *first;
	int i;
	int flag;
	int endspace;

	flag = 0;
	i = 0;
	first= first_wd(str);
	while (space(str[i]))
		i++;
	while (str[i] && !space(str[i]))
		i++;
	while(str[i] && space(str[i]))
		i++;
	while(str[i])
	{
		if (str[i] && !space(str[i]) && flag == 1)
		{
			ft_putchar(' ');
			flag = 0;
		}
		if (str[i] && !space(str[i]))
		{
			ft_putchar(str[i]);
			endspace = 1;
		}
		if (str[i] && space(str[i]))
			flag = 1;
		i++;
		if (str[i] == '\0' && endspace == 1)
			ft_putchar(' ');
	}
	ft_putstr(first);
}

int main(int argc, char *argv[])
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
}
