/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:25:17 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 13:15:33 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalize(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (c >= 'A' && c <= 'Z')
			c += 32;
		if ((c >= 'a' && c <= 'z') && (!*(str + 1)
				|| *(str + 1) == ' ' || *(str + 1) == '\t'))
			c -= 32;
		write(1, &c, 1);
		++str;
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
			if (i != 1)
				write(1, "\n", 1);
			rstr_capitalize(argv[i]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
