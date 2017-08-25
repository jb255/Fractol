/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdef.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaustry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 16:47:28 by jaustry           #+#    #+#             */
/*   Updated: 2015/12/15 16:56:29 by jaustry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst == NULL || del == NULL || *alst == NULL)
		return ;
	while ((*alst) != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		tmp = *alst;
		free(*alst);
		*alst = tmp->next;
	}
}
