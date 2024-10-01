/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:46:39 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 15:47:14 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size);

int	main(void)
{
	int	tab[] = {5, 4, 3, 2, 1};
	int	size = 5;
	int	i;

	i = 0;
	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		++i;
	}
	return (0);
}
