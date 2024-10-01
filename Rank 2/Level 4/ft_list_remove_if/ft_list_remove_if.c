/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:08:58 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 14:12:10 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*previous;

	current = *begin_list;
	previous = 0;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (previous)
				previous->next = current->next;
			else
				*begin_list = current->next;
		}
		previous = current;
		current = current->next;
	}
}
