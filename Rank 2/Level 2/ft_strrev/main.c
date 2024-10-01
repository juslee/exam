/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:22:19 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:39:10 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char	str[] = "Hello, World!";

	ft_strrev(str);
	printf("ft_strrev: %s\n", str);
	return (0);
}
