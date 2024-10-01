/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:10:15 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 12:20:58 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_hex(unsigned int n)
{
	char *hex_digits = "0123456789abcdef";

	if (n >= 16)
		ft_putnbr_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	ft_atoi(char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		++str;
	}
	return (result * sign);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		ft_putnbr_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}
