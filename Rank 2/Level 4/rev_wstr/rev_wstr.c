/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:50:20 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 15:01:55 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 2)
	{
		i = 0;
		// find the end of the string
		while (argv[1][i])
			++i;
		// iterate through the string
		while (--i >= 0)
		{
			// find the start of the word
			if (argv[1][i] == ' ' || i == 0)
			{
				// save the beginning of the word
				j = i;
				if (i != 0)
					++i;
				// print the word
				while (argv[1][i] && argv[1][i] != ' ')
					write(1, &argv[1][i++], 1);
				if (i != 0)
					write(1, " ", 1);
				// restore the beginning of the word
				i = j;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
