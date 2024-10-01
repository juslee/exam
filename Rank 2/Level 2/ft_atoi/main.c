/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:45:46 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:47:10 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf("atoi: %d\n", ft_atoi("1234"));
	printf("atoi: %d\n", ft_atoi("  1234"));
	printf("atoi: %d\n", ft_atoi("  -1234"));
	printf("atoi: %d\n", ft_atoi("  +1234"));
	printf("atoi: %d\n", ft_atoi("  -+1234"));
	printf("atoi: %d\n", ft_atoi("  +-1234"));
}
