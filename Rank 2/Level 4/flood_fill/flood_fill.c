/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:31:39 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 13:43:49 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill_helper(char **tab, t_point size, t_point begin, char c)
{
	if (begin.x < 0 || begin.y < 0 || begin.x >= size.x || begin.y >= size.y || tab[begin.y][begin.x] != c)
		return ;
	tab[begin.y][begin.x] = 'F';
	flood_fill_helper(tab, size, (t_point){begin.x + 1, begin.y}, c);
	flood_fill_helper(tab, size, (t_point){begin.x - 1, begin.y}, c);
	flood_fill_helper(tab, size, (t_point){begin.x, begin.y + 1}, c);
	flood_fill_helper(tab, size, (t_point){begin.x, begin.y - 1}, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	flood_fill_helper(tab, size, begin, tab[begin.y][begin.x]);
}
