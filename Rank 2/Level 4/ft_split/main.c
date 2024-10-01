/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:41:52 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 14:42:05 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**res;
	char	*str;
	char	*charset;

	str = "Hello, World!";
	charset = " ,!";
	res = ft_split(str, charset);
	for (int i = 0; res[i]; i++)
	{
		printf("%s\n", res[i]);
		free(res[i]);
	}
	free(res);
	return (0);
}
