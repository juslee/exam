/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:02:45 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 11:10:26 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list);

int	main(void)
{
	t_list	*list;
	int		size;

	list = (t_list *)malloc(sizeof(t_list));
	list->data = "Hello";
	list->next = (t_list *)malloc(sizeof(t_list));
	list->next->data = "World";
	list->next->next = (t_list *)malloc(sizeof(t_list));
	list->next->next->data = "!";
	list->next->next->next = NULL;
	size = ft_list_size(list);
	printf("size: %d\n", size);
	return (0);
}
