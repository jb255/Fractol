/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:42:21 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/04 05:48:22 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t a;

	a = 0;
	if (n < 1)
		return (0);
	while ((a < (n - 1)) && s1[a] && (s1[a] == s2[a]))
		a++;
	return (((unsigned char)s1[a]) - ((unsigned char)s2[a]));
}
