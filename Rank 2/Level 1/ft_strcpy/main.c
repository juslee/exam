/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:25:29 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 13:29:56 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[14];
	char	*src;

	src = "Hello, World!";
	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);
	return (0);
}
