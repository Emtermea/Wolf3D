/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:39:00 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/14 21:37:05 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n)
	{
		if (s1[i] == s2[i] && n)
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		n--;
	}
	return (0);
}
