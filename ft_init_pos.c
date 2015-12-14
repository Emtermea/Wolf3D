/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:17:44 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/06 17:08:29 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <math.h>
#include "libft.h"
#include "wolf3d.h"

void		ft_init_pos(t_env *e)
{
	e->posx = 16;
	e->posy = 2;
	e->dirx = -1;
	e->diry = 0;
	e->planex = 0;
	e->planey = 0.66;
	e->up = 0;
	e->down = 0;
	e->right = 0;
	e->left = 0;
}

void		ft_image(t_env *e)
{
	e->im_pt = mlx_new_image(e->mlx, WID, HEIG);
	e->im = mlx_get_data_addr(e->im_pt, &e->bp_pxl, &e->size_line, &e->endian);
}

void		ft_init(t_env *e)
{
	e->rayposx = e->posx;
	e->rayposy = e->posy;
	e->raydirx = e->dirx + e->planex * e->camerax;
	e->raydy = e->diry + e->planey * e->camerax;
	e->mapx = (int)e->rayposx;
	e->mapy = (int)e->rayposy;
	e->deltadstx = sqrt(1 + (e->raydy * e->raydy) / (e->raydirx * e->raydirx));
	e->deltadsty = sqrt(1 + (e->raydirx * e->raydirx) / (e->raydy * e->raydy));
	e->hit = 0;
}

void		ft_height_line_draw(t_env *e)
{
	double	ax;
	double	bx;
	double	ay;
	double	by;

	ax = e->raydirx;
	bx = 1 - e->stepx;
	ay = e->raydy;
	by = 1 - e->stepy;
	if (e->side == 0)
		e->perpdst = fabs((double)((e->mapx - e->rayposx + (bx) / 2.0) / ax));
	else
		e->perpdst = fabs((double)((e->mapy - e->rayposy + (by) / 2.0) / ay));
}

void		cpy_map(t_env *e)
{
	e->worldmap = malloc(sizeof(e->worldmap) * 19);
	e->worldmap[0] = ft_strdup("1111111111111111");
	e->worldmap[1] = ft_strdup("1000000000000001");
	e->worldmap[2] = ft_strdup("1000111111113001");
	e->worldmap[3] = ft_strdup("1000100210001001");
	e->worldmap[4] = ft_strdup("1000101110313001");
	e->worldmap[5] = ft_strdup("1000301000100001");
	e->worldmap[6] = ft_strdup("1000103000300001");
	e->worldmap[7] = ft_strdup("1000100000100001");
	e->worldmap[8] = ft_strdup("1000313300300001");
	e->worldmap[9] = ft_strdup("1000000100100001");
	e->worldmap[10] = ft_strdup("1000003003000001");
	e->worldmap[11] = ft_strdup("1000001001000001");
	e->worldmap[12] = ft_strdup("1000113003000001");
	e->worldmap[13] = ft_strdup("1000300001000001");
	e->worldmap[14] = ft_strdup("1000100313000001");
	e->worldmap[15] = ft_strdup("1000001100001111");
	e->worldmap[16] = ft_strdup("1000000000000001");
	e->worldmap[17] = ft_strdup("1111111111111111");
	e->worldmap[18] = NULL;
}
