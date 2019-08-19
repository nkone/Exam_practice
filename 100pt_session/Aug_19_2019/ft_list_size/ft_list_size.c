/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:13:54 by phtruong          #+#    #+#             */
/*   Updated: 2019/08/19 14:16:58 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int c = 0;

	if (!begin_list)
		return (c);
	while (begin_list)
	{
		c++;
		begin_list = begin_list->next;
	}
	return (c);
}
