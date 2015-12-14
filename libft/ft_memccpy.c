/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:56:56 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/17 16:34:58 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char*)dst)[a] = ((unsigned char*)src)[a];
		if (((unsigned char*)src)[a] == ((unsigned char)c))
			return (&(((unsigned char*)dst)[a + 1]));
		a++;
	}
	return (NULL);
}
