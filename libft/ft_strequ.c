/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 04:36:30 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/13 16:26:02 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	a;

	a = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!s1[a] && !s2[a])
		return (1);
	while (s1[a])
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	if (s1[a] == s2[a])
		return (1);
	return (0);
}
