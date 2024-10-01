/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:04:14 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 15:41:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		start;
	int		end;
	char	*str;
	int		printed;

	i = 0;
	start = 0;
	end = 0;
	printed = 0;
	if (argc > 1)
	{
		str = argv[1];
		// Skip leading spaces/tabs
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			++i;
		// Mark the start of the first word
		start = i;
		// Find the end of the first word
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			++i;
		// Mark the end of the first word
		end = i;
		// Skip spaces/tabs after the first word
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		// Print the rest of the string after the first word
		while (str[i])
		{
			// Print the rest of the string after the first word
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				write(1, &str[i], 1);
				printed = 1;
			}
			// Print a single space between words
			else if (!(str[i - 1] == ' ' || str[i - 1] == '\t'))
			{
				write(1, " ", 1);
				printed = 1;
			}
			i++;
		}
		// Print a space and the first
		if (end > start)
		{
			// Add a space before the first word if needed
			if (printed)
				write(1, " ", 1);
			write(1, &str[start], end - start);
		}
	}
	write(1, "\n", 1);
	return (0);
}
