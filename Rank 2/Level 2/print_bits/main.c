/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:22:08 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:22:55 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_bits(unsigned char octet);

int	main(void)
{
	print_bits(2);
	printf("\n");
	print_bits(42);
	printf("\n");
	print_bits(255);
	printf("\n");
	return (0);
}
