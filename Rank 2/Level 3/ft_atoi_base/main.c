/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:37:25 by welee             #+#    #+#             */
/*   Updated: 2024/10/02 11:23:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("101", 2));
	printf("%d\n", ft_atoi_base("101", 10));
	printf("%d\n", ft_atoi_base("101", 16));
	printf("%d\n", ft_atoi_base("1A", 16));
	printf("%d\n", ft_atoi_base("1A", 10));
	printf("%d\n", ft_atoi_base("1A", 2));
	printf("%d\n", ft_atoi_base("1A", 1));
	printf("%d\n", ft_atoi_base("1A", 17));
	printf("%d\n", ft_atoi_base("1A", 0));
	printf("%d\n", ft_atoi_base("1a", -1));
	printf("%d\n", ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.", 16));
	printf("%d\n", ft_atoi_base("13268!", 16));
	printf("%d\n", ft_atoi_base("-13268!", 16));
}
