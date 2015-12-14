/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:38:53 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/14 21:26:47 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		a;

	a = ft_len(s);
	while (s[a] != c && a != 0)
		a--;
	if (s[a] == c)
		return (&(((char *)s)[a]));
	else
		return (NULL);
}
