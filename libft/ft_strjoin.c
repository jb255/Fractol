/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 05:06:21 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/07 21:53:07 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	size_t	len;
	size_t	b;

	b = -1;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	a = ft_strnew(len);
	if (!a)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		a[++b] = s1[len];
		len++;
	}
	len = 0;
	while (s2[len])
	{
		a[++b] = s2[len];
		len++;
	}
	a[++b] = '\0';
	return (a);
}
