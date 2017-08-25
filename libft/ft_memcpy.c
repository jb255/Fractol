/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 20:02:35 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/04 05:45:07 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;
	char	*dst2;
	char	*src2;

	a = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (a < n)
	{
		dst2[a] = src2[a];
		a++;
	}
	return ((void *)dst2);
}
