/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:24:16 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:24:19 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRACT_H
# define _FRACT_H
# define RAD (0.0175433)
# include "mlx.h"
# include <math.h>
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_win
{
	int		flag;
	double	shift_x;
	double	shift_y;
	void	*mlx1;
	void	*win1;
	double	mandel_x;
	double	mandel_y;
	int		s_x;
	int		s_y;
	void	*image;
	double	max_n;
	double	y_win;
	double	x_win;
	int		color;
	int		iter;
	double	zoom;
	double	z_x;
	double	z_y;
	double	z_dx;
	double	z_dy;
	double	z_shx;
	double	z_shy;
	double	m_x;
	double	m_y;
}				t_win;

int				mouse_move(int x, int y, t_win *cd);
int				zoom_mandel(int keycode, int x, int y, t_win *cd);
int				zoom_my_fract(int keycode, int x, int y, t_win *cd);
int				zoom_burning(int keycode, int x, int y, t_win *cd);
int				zoom_julia(int keycode, int x, int y, t_win *cd);

void			shift_mandel(int keycode, t_win *cd);
void			shift_julia(int keycode, t_win *cd);
void			shift_my_fract(int keycode, t_win *cd);
void			shift_burning(int keycode, t_win *cd);

void			key_funct_for_all(int keycode, t_win *cd);
void			change_fract1(int keycode, t_win *cd);
void			change_fract2(int keycode, t_win *cd);

void			string(t_win *cd);
void			make_image(t_win *cd);
void			make_window(t_win *cd);
void			ft_image_pixel_put(t_win *cd, int x, int y, int rgb);

int				my_key_funct_julia(int keycode, t_win *cd);
void			draw_julia(t_win *cd);
void			julia(t_win *cd);

void			coord_mandel(t_win *cd, double i, double j);
void			draw_mandel(t_win *cd);
int				my_key_funct_mandel(int keycode, t_win *cd);
void			mandelbrot(t_win *cd);

void			draw_burning(t_win *cd);
void			burning_ship(t_win *cd);
void			coord_burning(t_win *cd, double i, double j);
int				my_key_funct_burning(int keycode, t_win *cd);

void			my_fract(t_win *cd);
void			draw_my_fract(t_win *cd);
void			coord_my_fract(t_win *cd, double i, double j);
int				my_key_funct_my_fract(int keycode, t_win *cd);

#endif
