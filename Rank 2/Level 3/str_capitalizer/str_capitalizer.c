/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:35:53 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 12:57:21 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// Capitalize the first letter of each word
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		// Lowercase the rest of the word
		else if (!(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[++i])
		{
			str_capitalize(argv[i]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
