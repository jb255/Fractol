/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:22:34 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/15 16:53:39 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = NULL;
	if (lst && (*f))
	{
		a = (*f)(lst);
		c = a;
		lst = lst->next;
		while (lst)
		{
			b = (*f)(lst);
			c->next = b;
			c = b;
			lst = lst->next;
		}
		c->next = NULL;
	}
	return (a);
}
