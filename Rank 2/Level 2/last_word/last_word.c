/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:01:32 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:06:33 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			++argv[1];
		--argv[1];
		while (*argv[1] == ' ' || *argv[1] == '\t')
			--argv[1];
		while (*argv[1] && *argv[1] != ' ' && *argv[1] != '\t')
			--argv[1];
		while (*++argv[1] && *argv[1] != ' ' && *argv[1] != '\t')
			write(1, argv[1], 1);
	}
	write(1, "\n", 1);
	return (0);
}
