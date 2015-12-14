/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 22:17:31 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/15 19:02:05 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = NULL;
	if (s1 && s2)
	{
		new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!new)
			return (NULL);
		ft_strcpy(new, s1);
		ft_strcat(new, s2);
	}
	return (new);
}
