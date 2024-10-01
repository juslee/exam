/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:11:33 by welee             #+#    #+#             */
/*   Updated: 2024/09/25 15:15:00 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return ((char *)s1);
		++s1;
	}
	return (0);
}
