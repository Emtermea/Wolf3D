/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_side.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 18:17:21 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/18 18:17:22 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <math.h>
#include "libft.h"
#include "wolf3d.h"

void		ft_int_sidedst(t_env *e)
{
	if (e->raydirx < 0)
	{
		e->stepx = -1;
		e->sidedstx = (e->rayposx - e->mapx) * e->deltadstx;
	}
	else
	{
		e->stepx = 1;
		e->sidedstx = (e->mapx + 1.0 - e->rayposx) * e->deltadstx;
	}
	if (e->raydy < 0)
	{
		e->stepy = -1;
		e->sidedsty = (e->rayposy - e->mapy) * e->deltadsty;
	}
	else
	{
		e->stepy = 1;
		e->sidedsty = (e->mapy + 1.0 - e->rayposy) * e->deltadsty;
	}
}

void		ft_draw(t_env *e)
{
	e->lineheight = (int)fabs(HEIG / e->perpdst);
	e->drawstart = (-e->lineheight) / 2 + (HEIG / 2);
	if (e->drawstart < 0)
		e->drawstart = 0;
	e->drawend = (e->lineheight / 2) + (HEIG / 2);
	if (e->drawend >= HEIG)
		e->drawend = HEIG - 1;
}

void		ft_side_dst(t_env *e)
{
	if (e->sidedstx <= e->sidedsty)
	{
		e->sidedstx += e->deltadstx;
		e->mapx += e->stepx;
		e->side = 0;
	}
	else
	{
		e->sidedsty += e->deltadsty;
		e->mapy += e->stepy;
		e->side = 1;
	}
	if (e->worldmap[e->mapx][e->mapy] != '0')
		e->hit = 1;
	if (e->worldmap[e->mapx][e->mapy] == '2')
		mlx_string_put(e->mlx, e->win, 400, 450, 0x000000, " YOU WIN !");
}
