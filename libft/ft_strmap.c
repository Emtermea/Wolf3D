/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:23:11 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/15 19:11:02 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(s) + 1);
	if (s && f)
	{
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}
	}
	return (new);
}
