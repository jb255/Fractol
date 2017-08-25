/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:38:19 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/19 18:54:22 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	if ((!s2[0]) || (n == 0))
		return (char *)(s1);
	while (s1[a])
	{
		b = 0;
		if (s1[a] == s2[b])
		{
			while (((s2[b]) && (s2[b] == s1[a])) && (a < n))
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
	return (0);
}
