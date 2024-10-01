/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:43:45 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:44:57 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept);

int	main(void)
{
	char	*s;
	char	*accept;

	s = "Hello, World!";
	accept = "Hello";
	printf("ft_strspn: %zu\n", ft_strspn(s, accept));
	return (0);
}
