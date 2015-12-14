/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:55:36 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/05 18:24:33 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (s2 != NULL)
	{
		while (s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	else
		return (NULL);
}
