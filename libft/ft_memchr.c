/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:31:02 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/14 16:51:18 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (n--)
	{
		while (((char*)s)[a] != (char)c && ((char*)s)[a] != '\0')
			a++;
		if (((char*)s)[a] == (char)c)
			return (&(((char *)s)[a]));
	}
	return (NULL);
}
