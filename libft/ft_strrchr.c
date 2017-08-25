/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:36:55 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/04 05:47:39 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	c2;

	c2 = (char)c;
	last = NULL;
	while (*s)
	{
		if (*s == c2)
			last = (char *)s;
		s++;
	}
	if (*s == c2)
		last = (char *)s;
	return (last);
}
