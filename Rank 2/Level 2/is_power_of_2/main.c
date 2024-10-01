/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:59:02 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:00:36 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n);

int	main(void)
{
	unsigned int	n;

	n = 16;
	printf("is_power_of_2: %d\n", is_power_of_2(n));
	return (0);
}
