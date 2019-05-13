/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 08:00:20 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/06 10:48:09 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <string.h>
#include <stdio.h>
void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *temp;

	list = *begin_list;
	while (list->next)
	{
		if (cmp(list->next->data, data_ref) == 0)
		{
			temp = list->next;
			list->next = temp->next;
			free(temp);
		}
		else
			list = list->next;
	}
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		temp = (*begin_list);
		*begin_list = temp->next;
		free(temp);
	}
}
/*
int		cmp(void *s1, void *s2)
{
	return (strcmp((const char *)s1,(const char *)s2));
}

t_list		*create(void *data)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}

t_list		*append(t_list *head, void *data)
{
	t_list	*cursor;
	cursor = head;

	while (cursor->next)
		cursor = cursor->next;
	cursor->next = create(data);
	return (head);
}

void		print_list(t_list *head)
{
	while (head)
		printf("%s\n", head->data), head = head->next;
}
int main(void)
{
	t_list *tmp = create("hello");
	tmp = append(tmp,"hi");
	tmp = append(tmp, "hello");
	print_list(tmp);
	ft_list_remove_if(&tmp, "hello", cmp);
	print_list(tmp);

}*/
