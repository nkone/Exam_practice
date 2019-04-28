/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:36:12 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/01 14:54:03 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		space(char c)
{
	return(c == ' ' || c == '\t');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur(char *str)
{
	int i;
	int flag;

	flag = 0;
	i = 0;

	while (space(str[i]))
		i++;
	while(str[i])
	{
		if (flag && !space(str[i]))
		{
			flag = 0;
			ft_putchar(' ');
		}
		if(!space(str[i]))
			ft_putchar(str[i]);
		if(space(str[i]))
			flag = 1;
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		epur(argv[1]);
	ft_putchar('\n');
	return(0);
}

		
