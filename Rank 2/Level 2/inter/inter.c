/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:51:24 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:54:46 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ascii[256] = {0};

	if (argc == 3)
	{
		while (*argv[2])
		{
			if (!ascii[(int)*argv[2]])
				ascii[(int)*argv[2]] = 1;
			++argv[2];
		}
		while (*argv[1])
		{
			if (ascii[(int)*argv[1]] == 1)
			{
				ascii[(int)*argv[1]] = 2;
				write(1, argv[1], 1);
			}
			++argv[1];
		}
	}
	write(1, "\n", 1);
	return (0);
}
