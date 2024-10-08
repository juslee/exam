/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:20:39 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:20:59 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				*argv[1] -= 32;
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				*argv[1] += 32;
			write(1, argv[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
