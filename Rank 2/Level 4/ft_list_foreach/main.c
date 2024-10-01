/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:05:09 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 14:07:25 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(void *data)
{
	printf("%d\n", *(int *)data);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list)
	{
		new_list->data = data;
		new_list->next = *begin_list;
		*begin_list = new_list;
	}
}

int	main(void)
{
	t_list	*list;
	int		data1;
	int		data2;
	int		data3;

	data1 = 42;
	data2 = 21;
	data3 = 84;
	list = NULL;
	ft_list_push_front(&list, &data1);
	ft_list_push_front(&list, &data2);
	ft_list_push_front(&list, &data3);
	ft_list_foreach(list, &ft_putnbr);
	return (0);
}
