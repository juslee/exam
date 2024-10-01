/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:39:50 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 14:42:58 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		result;
	char	*operator;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		if (*operator == '+')
			result = num1 + num2;
		else if (*operator == '-')
			result = num1 - num2;
		else if (*operator == '*')
			result = num1 * num2;
		else if (*operator == '/')
			result = num1 / num2;
		else if (*operator == '%')
			result = num1 % num2;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
