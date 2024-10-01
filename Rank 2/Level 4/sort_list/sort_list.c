/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:48:48 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 15:56:04 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*tmp;
	int		data;

	tmp = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = data;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
