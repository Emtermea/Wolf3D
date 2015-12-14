/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 16:37:54 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/06 17:09:18 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include "wolf3d.h"

int		expose_hook(t_env *e)
{
	ft_move(e);
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65362)
		e = ft_up(e);
	if (keycode == 65364)
		e = ft_down(e);
	if (keycode == 65363)
		e = ft_right(e);
	if (keycode == 65361)
		e = ft_left(e);
	if (keycode == 65307)
		exit(0);
	expose_hook(e);
	return (0);
}

int		ft_update(t_env *e)
{
	if (e->up)
		e = ft_up(e);
	if (e->down)
		e = ft_down(e);
	if (e->right)
		e = ft_right(e);
	if (e->left)
		e = ft_left(e);
	expose_hook(e);
	return (42);
}

int		ft_key_press(int keycode, t_env *e)
{
	if (keycode == 65362)
		e->up = 1;
	if (keycode == 65364)
		e->down = 1;
	if (keycode == 65363)
		e->right = 1;
	if (keycode == 65361)
		e->left = 1;
	if (keycode == 65307)
		exit(0);
	if (keycode == 32)
	{
		if (e->worldmap[e->mapx][e->mapy] == '3')
			e->worldmap[e->mapx][e->mapy] = '0';
	}
	return (0);
}

int		ft_key_release(int keycode, t_env *e)
{
	if (keycode == 65362)
		e->up = 0;
	if (keycode == 65364)
		e->down = 0;
	if (keycode == 65363)
		e->right = 0;
	if (keycode == 65361)
		e->left = 0;
	return (0);
}
