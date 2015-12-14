/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 18:07:58 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/18 18:20:29 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "wolf3d.h"

void	ft_check_color(t_env *e)
{
	if (e->side == 1 && e->raydy > 0)
	{
		e->r = 255;
		e->g = 153;
		e->b = 0;
	}
	else if (e->side == 1 && e->raydy <= 0)
	{
		e->r = 0;
		e->g = 153;
		e->b = 51;
	}
	else if (e->side == 0 && e->raydirx > 0)
	{
		e->r = 0;
		e->g = 153;
		e->b = 255;
	}
	else if (e->side == 0 && e->raydirx <= 0)
	{
		e->r = 0;
		e->b = 153;
		e->g = 0;
	}
}

void	ft_verline(t_env *e, int x, int drawstart, int drawend)
{
	int a;

	a = 0;
	while (a < drawstart)
	{
		e->im[(x * 4 + a * e->size_line)] = 60;
		e->im[(x * 4 + a * e->size_line) + 1] = 60;
		e->im[(x * 4 + a * e->size_line) + 2] = 60;
		a++;
	}
	ft_check_color(e);
	while (a < drawend)
	{
		e->im[(x * e->bp_pxl / 8 + a * e->size_line)] = e->r;
		e->im[(x * e->bp_pxl / 8 + a * e->size_line) + 1] = e->g;
		e->im[(x * e->bp_pxl / 8 + a * e->size_line) + 2] = e->b;
		a++;
	}
	while (a < HEIG)
	{
		e->im[(x * 4 + a * e->size_line)] = 139;
		e->im[(x * 4 + a * e->size_line) + 1] = 105;
		e->im[(x * 4 + a * e->size_line) + 2] = 105;
		a++;
	}
}
