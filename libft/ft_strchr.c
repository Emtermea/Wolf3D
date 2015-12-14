/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:26:10 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/07 21:03:54 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		a;

	a = 0;
	while (s[a] != c && s[a] != '\0')
		a++;
	if (s[a] == c)
		return (&(((char*)s)[a]));
	else
		return (NULL);
}
