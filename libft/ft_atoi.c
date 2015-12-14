/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 23:01:17 by emtermea          #+#    #+#             */
/*   Updated: 2015/01/09 15:06:53 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_atoi(const char *str)
{
	int		nb;
	int		a;
	int		neg;

	neg = 1;
	nb = 0;
	a = 0;
	while (str[a] >= 127 || str[a] < 33)
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			neg = -1;
		a++;
	}
	while (str[a] && str[a] >= '0' && str[a] <= '9')
	{
		nb *= 10;
		nb = nb + (str[a] - 48);
		a++;
	}
	return (nb * neg);
}
