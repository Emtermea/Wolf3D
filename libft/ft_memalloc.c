/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 00:46:28 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/16 20:33:45 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*new;
	char	*hlp;

	new = malloc(sizeof(size));
	hlp = new;
	if (!new || (int)size <= 0)
		return (NULL);
	while ((hlp - new) < (int)size)
		*(hlp++) = 0;
	return (new);
}
