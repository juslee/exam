/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:51:13 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 13:55:30 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str);

int	main(void)
{
	rev_print("Hello world");
	// write (1, "\n", 1);
	rev_print("tnirp esreveR");
	// write (1, "\n", 1);
	rev_print("");
	// write (1, "\n", 1);
}
