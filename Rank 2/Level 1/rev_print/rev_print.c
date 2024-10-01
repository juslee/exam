/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:50:44 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 13:55:14 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		++len;
	while (len--)
		write(1, &str[len], 1);
	write(1, "\n", 1);
	return (str);
}
