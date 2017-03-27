/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_funct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:25:49 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:25:50 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

void	change_fract2(int keycode, t_win *cd)
{
	if (keycode == 21)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].shift_x = 0;
		cd[0].shift_y = 0;
		cd[0].zoom = 1;
		cd[0].z_shx = 0;
		cd[0].z_shy = 0;
		cd[0].color = 1000000;
		draw_my_fract(cd);
	}
	if (keycode == 20)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].shift_x = 0;
		cd[0].shift_y = 0;
		cd[0].zoom = 1;
		cd[0].z_shx = 0;
		cd[0].z_shy = 0;
		cd[0].color = 1000000;
		draw_burning(cd);
	}
}

void	change_fract1(int keycode, t_win *cd)
{
	if (keycode == 18)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].shift_x = 0;
		cd[0].shift_y = 0;
		cd[0].zoom = 1;
		cd[0].z_shx = 0;
		cd[0].z_shy = 0;
		cd[0].color = 1000000;
		draw_mandel(cd);
	}
	if (keycode == 19)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].shift_x = 0;
		cd[0].shift_y = 0;
		cd[0].zoom = 1;
		cd[0].z_shx = 0;
		cd[0].z_shy = 0;
		cd[0].color = 1000000;
		draw_julia(cd);
	}
}

void	key_funct_for_all(int keycode, t_win *cd)
{
	if (keycode == 53)
		exit(0);
	change_fract1(keycode, cd);
	change_fract2(keycode, cd);
}
