/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:55:32 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/12 00:23:43 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	char	x;
	char	y;

	x = (n + 48);
	y = 45;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(1, &y, 1);
			n = n * -1;
		}
		if (n <= 9)
			write(1, &x, 1);
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}
