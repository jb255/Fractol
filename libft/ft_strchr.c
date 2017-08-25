/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:51:58 by jaustry           #+#    #+#             */
/*   Updated: 2015/11/25 20:14:07 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return ((char*)&s[a]);
		a++;
	}
	if (s[a] == c)
		return ((char*)&s[a]);
	else
		return (NULL);
}
