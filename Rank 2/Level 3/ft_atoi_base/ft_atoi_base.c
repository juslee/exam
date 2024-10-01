/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:25:25 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 10:58:07 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	current_value;

	result = 0;
	sign = 1;
	if (str == NULL || str_base < 2 || str_base > 16)
		return (0);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'f') || (*str >= 'A' && *str <= 'F'))
	{
		if (*str >= '0' && *str <= '9')
			current_value = *str - '0';
		else if (*str >= 'a' && *str <= 'f')
			current_value = *str - 'a' + 10;
		else if (*str >= 'A' && *str <= 'F')
			current_value = *str - 'A' + 10;
		else
			return (0);
		if (current_value >= str_base)
			return (0);
		result = result * str_base + current_value;
		++str;
	}
	return (result * sign);
}
