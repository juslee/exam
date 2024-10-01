/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:49:49 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:51:13 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello, World!";
	s2 = "Hello, World!";
	printf("strcmp: %d\n", ft_strcmp(s1, s2));
	s1 = "Hello, World!";
	s2 = "Hello, World";
	printf("strcmp: %d\n", ft_strcmp(s1, s2));
	s1 = "Hello, World";
	s2 = "Hello, World!";
	printf("strcmp: %d\n", ft_strcmp(s1, s2));
	s1 = "Hello, World!";
	s2 = "Hello, World!";
	printf("strcmp: %d\n", ft_strcmp(s1, s2));
	return (0);
}
