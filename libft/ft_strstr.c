/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:20:27 by jaustry           #+#    #+#             */
/*   Updated: 2015/11/29 22:05:31 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int a;
	int b;

	a = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[a])
	{
		b = 0;
		if (s1[a] == s2[b])
		{
			while ((s2[b]) && (s2[b] == s1[a]))
			{
				a++;
				b++;
			}
			if (s2[b] == '\0')
				return ((char *)s1 + a - b);
			a = a - (b - 1);
		}
		a++;
	}
	return (NULL);
}
