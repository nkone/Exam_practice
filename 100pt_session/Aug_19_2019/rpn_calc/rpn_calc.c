/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:23:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/08/19 14:40:19 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

//do op function
//skip num function

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	do_op(int a, char c, int b)
{
	int res = 0;

	res =
		(c == '+') ? (a + b) :
		(c == '-') ? (a - b) :
		(c == '*') ? (a * b) :
		(c == '/') ? (a / b) :
		(c == '%') ? (a % b) :
		res;
	return (res);
}

void	skip_num(int *idx, char *str)
{
	int i = *idx;
	while (ft_isdigit(*str))
	{
		i++;
		str++;
	}
	*idx = i;
}

int rpn_calc(char *str)
{
	int tab[4242];
	int i = 0;
	int j = 0;

	while (str[i])
	{
		if (ft_isdigit(str[i]) || ((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1])))
		{
			tab[j++] = atoi(&str[i++]);
			skip_num(&i, &str[i]);
		}
		if (str[i] == '*' || str[i] == '/' || str[i] == '%' || ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1])))
		{
			if (j < 1 || ((str[i] == '/' || str[i] == '%') && tab[j - 1] == 0))
				return (printf("Error\n"));
			tab[j - 2] = do_op(tab[j - 2], str[i], tab[j - 1]);
			j--;
		}
		i++;
	}
	if (j != 1)
		return (printf("Error\n"));
	return (printf("%d\n", tab[0]));
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (printf("Error\n"));
	rpn_calc(argv[1]);
}
	
