/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:04:14 by welee             #+#    #+#             */
/*   Updated: 2024/10/02 14:08:22 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	char *start;
	char *end;

	if (argc > 1)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t')
			str++;
		start = str;
		while (*str && *str != ' ' && *str != '\t')
			str++;
		end = str;
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str) {
			while (*str)
			{
				if (*str == ' ' || *str == '\t')
				{
					while (*str == ' ' || *str == '\t')
						str++;
					if (*str)
						write(1, " ", 1);
				}
				else
				{
					write(1, str, 1);
					str++;
				}
			}
			write(1, " ", 1);
		}
		while (start < end)
		{
			write(1, start, 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
