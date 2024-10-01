/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:01:07 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:03:16 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject);

int	main(void)
{
	char	*s;
	char	*reject;

	s = "Hello, World!";
	reject = " ,!";
	printf("ft_strcspn: %lu\n", ft_strcspn(s, reject));
	printf("strcspn: %lu\n", strcspn(s, reject));
	return (0);
}
