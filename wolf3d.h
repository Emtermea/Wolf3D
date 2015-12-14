/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 14:43:47 by emtermea          #+#    #+#             */
/*   Updated: 2015/02/21 16:53:48 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H
# define WID 650
# define HEIG 650
# define SPEED 0.1
# define ROTSPEED 0.1

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		**worldmap;
	void		*im_pt;
	int			bp_pxl;
	int			size_line;
	int			endian;
	char		*im;
	double		posx;
	double		posy;
	double		dirx;
	double		diry;
	double		planex;
	double		planey;
	double		camerax;
	double		rayposx;
	double		rayposy;
	double		raydirx;
	double		raydy;
	int			mapx;
	int			mapy;
	double		sidedstx;
	double		sidedsty;
	double		deltadstx;
	double		deltadsty;
	double		perpdst;
	int			stepx;
	int			stepy;
	int			hit;
	int			side;
	double		olddirx;
	double		oldplanex;
	int			lineheight;
	int			drawstart;
	int			drawend;
	int			color;
	double		h;
	int			up;
	int			down;
	int			right;
	int			left;
	int			r;
	int			g;
	int			b;

}				t_env;

void			ft_init_pos(t_env *e);
void			ft_image(t_env *e);
t_env			*ft_up(t_env *e);
t_env			*ft_down(t_env *e);
t_env			*ft_right(t_env *e);
t_env			*ft_left(t_env *e);
int				expose_hook(t_env *e);
int				key_hook(int keycode, t_env *e);
void			ft_move(t_env *e);
void			cpy_map(t_env *e);
void			ft_height_line_draw(t_env *e);
void			ft_init(t_env *e);
int				ft_loop_hook(t_env *e);
int				ft_key_press(int keycode, t_env *e);
int				ft_key_release(int keycode, t_env *e);
int				ft_update(t_env *e);
void			ft_check_color(t_env *e);
void			ft_verline(t_env *e, int x, int drawstart, int drawend);
void			ft_int_sidedst(t_env *e);
void			ft_side_dst(t_env *e);
void			ft_draw(t_env *e);

#endif
