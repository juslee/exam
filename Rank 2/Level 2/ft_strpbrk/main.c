/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:16:00 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:16:47 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello, World!";
	s2 = " ,!";
	printf("ft_strpbrk: %s\n", ft_strpbrk(s1, s2));
	printf("strpbrk: %s\n", strpbrk(s1, s2));
	return (0);
}
