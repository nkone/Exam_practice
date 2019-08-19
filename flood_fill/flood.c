/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 13:10:56 by phtruong          #+#    #+#             */
/*   Updated: 2019/07/29 13:20:12 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	ft_flood(char **tab, t_point size, int x, int y, char c)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != c)
		return;
	tab[y][x] = 'F';
	ft_flood(tab, size, x + 1, y, c);
	ft_flood(tab, size, x - 1, y, c);
	ft_flood(tab, size, x, y + 1, c);
	ft_flood(tab, size, x, y - 1, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	ft_flood(tab, size, begin.x, begin.y, tab[begin.y][begin.x]);
}
