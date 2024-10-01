/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:45:42 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 13:49:18 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	if (n == 1)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		i = 1;
		while (++i <= n)
		{
			if (is_prime(i))
			{
				while (n % i == 0)
				{
					printf("%d", i);
					n /= i;
					if (n != 1)
						printf("*");
				}
			}
		}
	}
	printf("\n");
	return (0);
}
