/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:32:15 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 11:33:19 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_rrange(int start, int end);

int	main(void)
{
	int	*range;
	int	i;

	range = ft_rrange(1, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", range[i]);
		++i;
	}
	range = ft_rrange(-1, 2);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", range[i]);
		++i;
	}
	range = ft_rrange(0, 0);
	i = 0;
	while (i < 1)
	{
		printf("%d\n", range[i]);
		++i;
	}
	range = ft_rrange(0, -3);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", range[i]);
		++i;
	}
	return (0);
}
