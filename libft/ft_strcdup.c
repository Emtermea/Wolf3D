/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 11:10:45 by emtermea          #+#    #+#             */
/*   Updated: 2014/12/16 18:23:18 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
