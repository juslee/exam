/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:37:44 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 13:45:27 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc == 2)
	{
		while (*argv[1])
		{
			j = 0;
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				j = *argv[1] - 'a' + 1;
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				j = *argv[1] - 'A' + 1;
			else
				write(1, argv[1], 1);
			while (j--)
				write(1, argv[1], 1);
			++argv[1];
		}
	}
	write(1, "\n", 1);
	return (0);
}
