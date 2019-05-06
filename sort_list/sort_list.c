/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 09:43:14 by phtruong          #+#    #+#             */
/*   Updated: 2019/05/06 13:58:33 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"
#include <stdio.h>

void	ft_swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
t_list	*sort_list(t_list *lst, int (*cmp)()) {
	t_list *tmp;

	tmp = lst;
	while (lst->next) {
		if (!cmp(lst->data, lst->next->data)) {
			ft_swap(&lst->data, &lst->next->data);
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	return (tmp);
}

t_list	*create(int data) {
	t_list *head = malloc(sizeof(t_list));

	head->data = data;
	head->next = NULL;
	return (head);
}

t_list	*append(t_list *head, int data) {
	t_list *cursor;

	cursor = head;
	if (!cursor)
		return (NULL);
	while(cursor->next)
		cursor = cursor->next;
	cursor->next = create(data);
	return (head);
}
void	print_list(t_list *head) {
	while (head)
		printf("%d ", head->data), head = head->next;
	printf("\n");
}
int		cmp(int a, int b) {
	return (a <= b);
}

int main(void)
{
	t_list *test = malloc(sizeof(t_list));
	test->next=malloc(sizeof(t_list));
	test->next->data=21;
	test->next->next=NULL;
	//test = append(test, 3);
	//test = append(test, 2);
	//test = append(test, 3);
	print_list(test);
	sort_list(test, cmp);
	print_list(test);
}

