/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:51:28 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/07 19:27:48 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		i++;
		if (s2[j] == '\0')
			return (&(((char*)s1)[i - j]));
	}
	return (NULL);
}
