/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 10:22:31 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/23 19:11:15 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcdup(char const *str, char c)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while (str[len] && str[len] != c)
		len++;
	if (!(dst = (char *)malloc(sizeof(char *) * (len))))
		return (NULL);
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		ft_count_split(char const *str, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
			n++;
		while (str[i] != c && str[i])
			i++;
	}
	return (n);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**tab;
	char	*new;
	int		i;
	int		y;

	y = 0;
	i = 0;
	if (!str)
		return (NULL);
	tab = (char **)malloc((ft_count_split(str, c) + 1) * sizeof(char *));
	while (str[i])
	{
		while (str[i] == c)
			i++;
		new = ft_strcdup(str + i, c);
		i += ft_strlen(new);
		if (str[i] == 0 && y == 0 && new[0] == 0)
			tab[0] = 0;
		else if (new[0] != 0)
			tab[y++] = ft_strdup(new);
		free(new);
	}
	tab[y] = 0;
	return (tab);
}
