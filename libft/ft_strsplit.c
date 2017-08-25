/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:34:09 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/19 15:12:24 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_struse(char const *s, unsigned int start, size_t len)
{
	char	*use;
	size_t	a;

	use = NULL;
	if (s != NULL)
	{
		use = ft_strnew(len);
		a = 0;
		if (use != NULL)
		{
			while (a < len && s[start + a])
			{
				use[a] = s[start + a];
				a++;
			}
			use[a] = '\0';
		}
	}
	return (use);
}

static size_t		ft_strnbw(const char *s, char c)
{
	size_t	a;
	size_t	nb;

	nb = 0;
	a = 0;
	if (s != NULL)
	{
		while (s[a])
		{
			if (s[a] != c && (a != 0 && s[a - 1] == c))
				nb++;
			a++;
		}
		return (nb + 1);
	}
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	a;
	size_t	k;
	size_t	b;
	char	**split;
	char	*tmp;

	a = 0;
	k = 0;
	b = 0;
	split = (char **)malloc(sizeof(char *) * ft_strnbw(s, c));
	if (split == NULL)
		return (NULL);
	while (b < ft_strnbw(s, c) && s[a])
	{
		a = k;
		while (s[a] && k < ft_strlen(s) && s[k] != c)
			k++;
		tmp = ft_struse(s, a, (k - a));
		if (tmp != NULL && k - a > 0)
			split[b++] = tmp;
		a++;
		k++;
	}
	split[b] = 0;
	return (split);
}
