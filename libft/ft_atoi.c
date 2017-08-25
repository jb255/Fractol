/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:23:19 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/15 19:53:51 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int a;
	int result;
	int b;

	result = 0;
	a = 0;
	b = 0;
	while (ft_isspace(str[a]) == 1)
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			result = 1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9' && str[a] != '\0')
	{
		b = (str[a] - 48) + b * 10;
		a++;
	}
	if (result == 1)
		b = -b;
	return (b);
}
