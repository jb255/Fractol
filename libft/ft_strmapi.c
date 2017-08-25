/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 03:55:49 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/06 19:23:55 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*b;
	size_t	c;
	size_t	a;

	c = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	a = ft_strlen(s);
	b = ft_strnew(a);
	if (!b)
		return (NULL);
	while (s[c])
	{
		b[c] = f(c, s[c]);
		c++;
	}
	b[c] = '\0';
	return (b);
}
