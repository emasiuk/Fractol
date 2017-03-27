/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:26:17 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:26:17 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

void	iter_mandel(int keycode, t_win *cd)
{
	if (keycode == 69)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter += 2;
		draw_mandel(cd);
	}
	if (keycode == 78)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		(cd[0].iter > 5) ? cd[0].iter -= 2 : 1;
		draw_mandel(cd);
	}
}

int		my_key_funct_mandel(int keycode, t_win *cd)
{
	shift_mandel(keycode, cd);
	key_funct_for_all(keycode, cd);
	iter_mandel(keycode, cd);
	if (keycode == 67)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].color += 10000;
		draw_mandel(cd);
	}
	if (keycode == 75)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		(cd[0].color > 15000) ? cd[0].color -= 10000 : 1;
		draw_mandel(cd);
	}
	return (1);
}

void	coord_mandel(t_win *cd, double i, double j)
{
	double	x;
	double	y;
	double	temp;
	int		iterr;

	x = 0;
	y = 0;
	iterr = 0;
	while ((x * x + y * y) < 4 && iterr < cd[0].iter)
	{
		temp = x * x - y * y + cd[0].x_win;
		y = 2 * x * y + cd[0].y_win;
		x = temp;
		iterr++;
	}
	if (iterr < cd[0].iter / 2)
		ft_image_pixel_put(cd, j, i, cd[0].color * iterr);
	else
		ft_image_pixel_put(cd, j, i, 0);
}

void	draw_mandel(t_win *cd)
{
	double i;
	double j;

	cd[0].image = mlx_new_image(cd[0].mlx1, cd[0].s_x, cd[0].s_y);
	i = -1;
	while (++i <= cd[0].s_y)
	{
		j = -1;
		cd[0].y_win = ((i - cd[0].shift_y - cd[0].s_y / 2.) * 4. - cd[0].s_y *
		1. * cd[0].z_shy * cd[0].zoom) / (cd[0].s_y * cd[0].zoom);
		while (++j < cd[0].s_x)
		{
			cd[0].x_win = ((j - cd[0].shift_x - cd[0].s_x / 2.) * 4. - cd[0].s_x
			* 1. * cd[0].z_shx * cd[0].zoom) / (cd[0].s_x * cd[0].zoom);
			coord_mandel(cd, i, j);
		}
	}
	mlx_put_image_to_window(cd[0].mlx1, cd[0].win1, cd[0].image, 0, 0);
	mlx_key_hook(cd[0].win1, my_key_funct_mandel, cd);
	mlx_mouse_hook(cd[0].win1, zoom_mandel, cd);
	string(cd);
}

void	mandelbrot(t_win *cd)
{
	cd[0].shift_x = 0;
	cd[0].shift_y = 0;
	cd[0].x_win = 0;
	cd[0].y_win = 0;
	cd[0].color = 1000000;
	draw_mandel(cd);
	mlx_loop(cd[0].mlx1);
}
