/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:08:40 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:09:33 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src;
	char	*dest;

	src = "Hello, World!";
	dest = ft_strdup(src);
	printf("dest: %s\n", dest);
	return (0);
}
