/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:23 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:16:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (*argv[1])
		{
			if (*argv[1] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, argv[1], 1);
			++argv[1];
		}
	}
	write(1, "\n", 1);
	return (0);
}
