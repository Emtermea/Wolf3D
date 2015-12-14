/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_code.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 16:25:11 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/18 17:36:34 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <math.h>
#include "wolf3d.h"

t_env		*ft_up(t_env *e)
{
	if (e->worldmap[(int)(e->posx + e->dirx * SPEED)][(int)e->posy] == '0')
		(e->posx) += (e->dirx * SPEED);
	if (e->worldmap[(int)e->posx][(int)(e->posy + e->diry * SPEED)] == '0')
		(e->posy) += (e->diry * SPEED);
	return (e);
}

t_env		*ft_down(t_env *e)
{
	if (e->worldmap[(int)(e->posx - e->dirx * SPEED)][(int)e->posy] == '0')
		(e->posx) -= (e->dirx * SPEED);
	if (e->worldmap[(int)e->posx][(int)(e->posy - e->diry * SPEED)] == '0')
		(e->posy) -= (e->diry * SPEED);
	return (e);
}

t_env		*ft_right(t_env *e)
{
	e->olddirx = e->dirx;
	e->dirx = e->dirx * cos(-ROTSPEED) - e->diry * sin(-ROTSPEED);
	e->diry = e->olddirx * sin(-ROTSPEED) + e->diry * cos(-ROTSPEED);
	e->oldplanex = e->planex;
	e->planex = e->planex * cos(-ROTSPEED) - e->planey * sin(-ROTSPEED);
	e->planey = e->oldplanex * sin(-ROTSPEED) + e->planey * cos(-ROTSPEED);
	return (e);
}

t_env		*ft_left(t_env *e)
{
	e->olddirx = e->dirx;
	e->dirx = e->dirx * cos(ROTSPEED) - e->diry * sin(ROTSPEED);
	e->diry = e->olddirx * sin(ROTSPEED) + e->diry * cos(ROTSPEED);
	e->oldplanex = e->planex;
	e->planex = e->planex * cos(ROTSPEED) - e->planey * sin(ROTSPEED);
	e->planey = e->oldplanex * sin(ROTSPEED) + e->planey * cos(ROTSPEED);
	return (e);
}
