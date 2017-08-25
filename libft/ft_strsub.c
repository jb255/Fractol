/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 04:50:39 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/06 19:39:30 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*b;

	if (s == NULL)
		return (NULL);
	if ((b = ft_strnew(len)) == NULL)
		return (NULL);
	a = 0;
	while (a < len && s[start] != '\0')
	{
		b[a] = s[start];
		a++;
		start++;
	}
	return (b);
}
