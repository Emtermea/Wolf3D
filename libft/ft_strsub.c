/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 18:33:29 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/15 19:00:07 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	a;

	new = NULL;
	a = start;
	if (s)
	{
		new = (char *)malloc(len + 1);
		if (!new)
			return (NULL);
		while (a < len + start)
		{
			new[a - start] = s[a];
			a++;
		}
		new[a + start] = '\0';
	}
	return (new);
}
