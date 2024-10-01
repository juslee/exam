/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:00:47 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:08:37 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (c + 13);
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (c - 13);
	return (c);
}

int	main(int argc, char **argv)
{
	char	c;

	if (argc == 2)
	{
		while (*argv[1])
		{
			c = rot_13(*argv[1]++);
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
