/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:08:39 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/19 16:15:58 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstaddend(t_list **alst, t_list *elem)
{
	t_list*tmp;

	if (!elem)
		return (NULL);
	if (!alst || !*alst)
		return (elem);
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = elem;
	return (elem);
}
