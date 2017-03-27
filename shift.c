/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:27:50 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:27:50 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

void	shift_mandel(int keycode, t_win *cd)
{
	if (keycode == 124)
	{
		cd[0].shift_x -= 10;
		draw_mandel(cd);
	}
	if (keycode == 123)
	{
		cd[0].shift_x += 10;
		draw_mandel(cd);
	}
	if (keycode == 125)
	{
		cd[0].shift_y -= 10;
		draw_mandel(cd);
	}
	if (keycode == 126)
	{
		cd[0].shift_y += 10;
		draw_mandel(cd);
	}
}

void	shift_my_fract(int keycode, t_win *cd)
{
	if (keycode == 124)
	{
		cd[0].shift_x -= 10;
		draw_my_fract(cd);
	}
	if (keycode == 123)
	{
		cd[0].shift_x += 10;
		draw_my_fract(cd);
	}
	if (keycode == 125)
	{
		cd[0].shift_y -= 10;
		draw_my_fract(cd);
	}
	if (keycode == 126)
	{
		cd[0].shift_y += 10;
		draw_my_fract(cd);
	}
}

void	shift_burning(int keycode, t_win *cd)
{
	if (keycode == 123)
	{
		cd[0].shift_x -= 10;
		draw_burning(cd);
	}
	if (keycode == 124)
	{
		cd[0].shift_x += 10;
		draw_burning(cd);
	}
	if (keycode == 126)
	{
		cd[0].shift_y -= 10;
		draw_burning(cd);
	}
	if (keycode == 125)
	{
		cd[0].shift_y += 10;
		draw_burning(cd);
	}
}

void	shift_julia(int keycode, t_win *cd)
{
	if (keycode == 123)
	{
		cd[0].shift_x -= 10;
		draw_julia(cd);
	}
	if (keycode == 124)
	{
		cd[0].shift_x += 10;
		draw_julia(cd);
	}
	if (keycode == 126)
	{
		cd[0].shift_y -= 10;
		draw_julia(cd);
	}
	if (keycode == 125)
	{
		cd[0].shift_y += 10;
		draw_julia(cd);
	}
}
