/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:51:13 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 14:00:38 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		len;
	int		n;
	char	*str;

	len = 1;
	n = nbr;
	while (n /= 10)
		++len;
	if (nbr < 0)
		++len;
	if (nbr == 0)
		return ("0");
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
		str[0] = '-';
	while (nbr)
	{
		if (nbr < 0)
			str[--len] = -(nbr % 10) + '0';
		else
			str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
