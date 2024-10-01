/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:50:04 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 17:50:58 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	first_word;

	if (argc == 2)
	{
		i = 0;
		first_word = 1;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			if (argv[1][i])
			{
				if (!first_word)
					write(1, "   ", 3);
				first_word = 0;
				while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
