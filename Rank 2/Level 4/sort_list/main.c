/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:53:11 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 15:54:37 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

int ascending(int a, int b)
{
	return (a <= b);
}

int	main(void)
{
	t_list	*list;
	t_list	*tmp;
	int		data[] = {5, 4, 3, 2, 1};
	int		i;

	i = 0;
	list = NULL;
	while (i < 5)
	{
		tmp = malloc(sizeof(t_list));
		tmp->data = data[i];
		tmp->next = list;
		list = tmp;
		++i;
	}
	list = sort_list(list, ascending);
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	return (0);
}
