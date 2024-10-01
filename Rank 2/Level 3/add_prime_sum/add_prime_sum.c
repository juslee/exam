/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:14:50 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 17:19:06 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int num)
{
	int	i;

	if (num < 2)
		return (0);
	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		++str;
	}
	return (result * sign);
}

void	ft_putnbr(int num)
{
	char	c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		sum = 0;
		while (num > 0)
		{
			if (is_prime(num))
				sum += num;
			--num;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
