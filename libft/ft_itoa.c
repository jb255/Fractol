/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 05:43:07 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/27 17:14:30 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t			len;
	char			*s;
	unsigned int	a;

	len = ft_countdigits(n);
	a = n;
	if (n < 0)
	{
		a = -n;
		len++;
	}
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s[len] = 0;
	s[--len] = a % 10 + '0';
	while (a /= 10)
		s[--len] = a % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
