/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 14:08:04 by phtruong          #+#    #+#             */
/*   Updated: 2019/04/22 14:36:38 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/*void	print_data(void *str){
	printf("%s\n", str);
}

t_list *create_node(void *data)
{
	t_list *head;
	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}

t_list *append(t_list *head, void *data)
{
	t_list *cursor;
	cursor = head;
	while (cursor->next)
		cursor = cursor->next;
	cursor->next = create_node(data);
	return (head);
}*/

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

