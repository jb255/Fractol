/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 04:45:37 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/12 15:41:43 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t a;

	a = 0;
	if ((!s1 && !s2) || (n == 0))
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[a] && s2[a] && (a < n))
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	if (((s1[a] && !s2[a]) || (!s1[a] && s2[a])) && (a < n))
		return (0);
	return (1);
}
