/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 23:52:48 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/07 23:11:09 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*b1;
	unsigned char	*b2;

	a = 0;
	b1 = (unsigned char*)s1;
	b2 = (unsigned char*)s2;
	while (a < n)
	{
		if (b1[a] != b2[a])
			return (b1[a] - b2[a]);
		a++;
	}
	return (0);
}
