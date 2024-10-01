/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:50 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 16:39:34 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;
	int i;

	i = 8;
	result = 0;
	while (i--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}
