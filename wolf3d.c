/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 14:37:28 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/10 17:02:04 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <mlx.h>
#include <math.h>
#include <X11/X.h>
#include "libft.h"
#include "wolf3d.h"

void		ft_move(t_env *e)
{
	int		x;

	x = 0;
	ft_bzero(e->im, e->size_line * HEIG);
	while (x < WID)
	{
		e->camerax = 2 * x / (double)WID - 1;
		ft_init(e);
		ft_int_sidedst(e);
		while (e->hit == 0)
			ft_side_dst(e);
		ft_height_line_draw(e);
		ft_draw(e);
		ft_verline(e, x, e->drawstart, e->drawend);
		x++;
	}
	mlx_put_image_to_window(e->mlx, e->win, e->im_pt, 0, 0);
}

int			main(void)
{
	t_env	e;

	cpy_map(&e);
	ft_init_pos(&e);
	if ((e.mlx = mlx_init()) == NULL)
		return (0);
	e.win = mlx_new_window(e.mlx, WID, HEIG, "WOLF3D");
	ft_image(&e);
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_hook(e.win, KeyPress, KeyPressMask, ft_key_press, &e);
	mlx_hook(e.win, KeyRelease, KeyReleaseMask, ft_key_release, &e);
	mlx_loop_hook(e.mlx, ft_update, &e);
	mlx_loop(e.mlx);
	return (0);
}
