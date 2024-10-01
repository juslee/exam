/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:06:41 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:11:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rotone(char c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
		return (c + 1);
	else if (c == 'z' || c == 'Z')
		return (c - 25);
	return (c);
}

int	main(int argc, char **argv)
{
	char	c;

	if (argc == 2)
	{
		while (*argv[1])
		{
			c = rotone(*argv[1]++);
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
