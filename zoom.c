/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:28:04 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:28:11 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

int		zoom_mandel(int keycode, int x, int y, t_win *cd)
{
	if (keycode == 4)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2.) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom *= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_mandel(cd);
	}
	if (keycode == 5)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom /= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_mandel(cd);
	}
	return (1);
}

int		zoom_burning(int keycode, int x, int y, t_win *cd)
{
	if (keycode == 4)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2.) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom *= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_burning(cd);
	}
	if (keycode == 5)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom /= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_burning(cd);
	}
	return (1);
}

int		zoom_julia(int keycode, int x, int y, t_win *cd)
{
	if (keycode == 4)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2.) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom *= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_julia(cd);
	}
	if (keycode == 5)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom /= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_julia(cd);
	}
	return (1);
}

int		zoom_my_fract(int keycode, int x, int y, t_win *cd)
{
	if (keycode == 4)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2.) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom *= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_my_fract(cd);
	}
	if (keycode == 5)
	{
		cd[0].z_x = (x * 1. - cd[0].s_x / 2.) * 4. / (cd[0].s_x * cd[0].zoom);
		cd[0].z_y = (y * 1. - cd[0].s_y / 2) * 4. / (cd[0].s_y * cd[0].zoom);
		cd[0].zoom /= 1.1;
		cd[0].z_dx = (x * 1. - cd[0].s_x / 2.) * 4. / cd[0].s_x;
		cd[0].z_dy = (y * 1. - cd[0].s_y / 2.) * 4. / cd[0].s_y;
		cd[0].z_shx -= cd[0].z_x - cd[0].z_dx / cd[0].zoom;
		cd[0].z_shy -= cd[0].z_y - cd[0].z_dy / cd[0].zoom;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_my_fract(cd);
	}
	return (1);
}

int		mouse_move(int x, int y, t_win *cd)
{
	if (cd[0].flag == 1)
	{
		cd[0].m_x = ((x * cd[0].s_x) / cd[0].s_x + 0.285) / cd[0].s_x;
		cd[0].m_y = ((y * cd[0].s_y) / cd[0].s_y + 0.01) / cd[0].s_y;
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		draw_julia(cd);
	}
	return (1);
}
