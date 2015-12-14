/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 19:26:14 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/18 17:57:04 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;
	t_list	*tmp;

	if (*alst && del)
	{
		new = (*alst)->next;
		while (new)
		{
			tmp = new;
			del((new)->content, (new)->content_size);
			new = new->next;
			free(tmp);
		}
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = NULL;
	}
}
