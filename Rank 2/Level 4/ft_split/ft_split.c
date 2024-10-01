/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:20:31 by welee             #+#    #+#             */
/*   Updated: 2024/10/01 14:48:42 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		word_count;
	char	**res;

	i = 0;
	j = 0;
	k = 0;
	word_count = 0;
	// find the number of words
	while (str[i])
	{
		// skip the delimiters
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		// count the number of words
		if (str[i])
			word_count++;
		// skip the word
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	// allocate memory for the array of strings
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	// extract the words
	i = 0;
	while (str[i])
	{
		// skip the delimiters
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		// find the end of the word
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		// copy the word
		if (i > j)
		{
			// allocate memory for the word
			res[k] = (char *)malloc(sizeof(char) * (i - j + 1));
			if (!res[k])
				return (NULL);
			// copy the word
			ft_strncpy(res[k], &str[j], i - j);
			k++;
		}
	}
	res[k] = NULL;
	return (res);
}
