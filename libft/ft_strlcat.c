/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 20:39:38 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/04 05:53:44 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	b = 0;
	c = ft_strlen(dst) + ft_strlen((char *)src);
	while ((dst[a]) && (a < size))
		a++;
	if (a == size)
		return (ft_strlen((char *)src) + size);
	while ((src[b]) && (a < size - 1))
		dst[a++] = src[b++];
	dst[a] = '\0';
	return (c);
}
