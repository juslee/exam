/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:49:26 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:53:24 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet);

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i /= 2;
	}
}

int	main(void)
{
	unsigned char	octet = 42;

	print_bits(octet);
	printf("\n");
	octet = swap_bits(octet);
	print_bits(octet);
	printf("\n");
	return (0);
}
