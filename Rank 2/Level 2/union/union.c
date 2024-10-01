/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:55:05 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:56:40 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ascii[256] = {0};

	if (argc == 3)
	{
		while (*argv[1])
		{
			if (!ascii[(unsigned char)*argv[1]])
			{
				ascii[(unsigned char)*argv[1]] = 1;
				write(1, argv[1], 1);
			}
			++argv[1];
		}
		while (*argv[2])
		{
			if (!ascii[(unsigned char)*argv[2]])
			{
				ascii[(unsigned char)*argv[2]] = 1;
				write(1, argv[2], 1);
			}
			++argv[2];
		}
	}
	write(1, "\n", 1);
	return (0);
}
