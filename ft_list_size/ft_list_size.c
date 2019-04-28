/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:03:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/08 10:16:44 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list *tmp;
	int c;
	c = 0;


	while (tmp)
	{
		c++;
		tmp = begin_list->next;
		begin_list = tmp;
	}
	return (c);
}
