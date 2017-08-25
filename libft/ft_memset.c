/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:23:13 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/17 18:39:42 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*b2;

	a = 0;
	b2 = (unsigned char *)b;
	while (a < len)
	{
		b2[a] = (unsigned char)c;
		a++;
	}
	return (void *)(b2);
}
