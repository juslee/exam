/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:47:22 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 11:50:35 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	printf("lcm: %d\n", lcm(10, 15));
	printf("lcm: %d\n", lcm(15, 10));
	printf("lcm: %d\n", lcm(10, 0));
	printf("lcm: %d\n", lcm(0, 15));
	printf("lcm: %d\n", lcm(0, 0));
	return (0);
}
