/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:14:39 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:16:26 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int max;

	if (len == 0)
		return (0);
	max = tab[0];
	while (--len)
		if (max < tab[len])
			max = tab[len];
	return (max);
}
