/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:17:13 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 13:24:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

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

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		i = 1;
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			write(1, argv[1], 1);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			++i;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
