/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:16:37 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:16:50 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len);

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};

	printf("max: %d\n", max(tab, 5));
	return (0);
}
