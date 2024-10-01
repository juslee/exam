/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:19:01 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 11:28:32 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	size;
	int	i;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	range = (int *)malloc(sizeof(int) * size);
	if (range == 0)
		return (0);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}
