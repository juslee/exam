/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:01:55 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 11:07:50 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*current;

	size = 0;
	current = begin_list;
	while (current)
	{
		++size;
		current = current->next;
	}
	return (size);
}
