/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:41:58 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 11:50:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	gcd;
	unsigned int	lcm;

	if (a == 0 || b == 0)
		return (0);
	gcd = a;
	while (gcd % b != 0)
		gcd += a;
	lcm = (a * b) / gcd;
	return (lcm);
}
