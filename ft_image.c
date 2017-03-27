/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:24:28 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:24:28 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

void	ft_image_pixel_put(t_win *cd, int x, int y, int rgb)
{
	int				bpp;
	int				sl;
	int				en;
	char			*image;
	unsigned int	tmp;

	image = mlx_get_data_addr(cd[0].image, &bpp, &sl, &en);
	tmp = (mlx_get_color_value(cd[0].mlx1, rgb));
	if (x > 0 && x < cd[0].s_x && y > 0 && y < cd[0].s_y)
		ft_memcpy((void *)(image + y * cd[0].s_x * (bpp / 8)) + x * (bpp / 8),
		(void *)&tmp, 4);
}

void	make_window(t_win *cd)
{
	cd[0].iter = 50;
	cd[0].m_x = 0.285;
	cd[0].m_y = 0.01;
	cd[0].mlx1 = mlx_init();
	cd[0].s_x = 800;
	cd[0].s_y = 800;
	cd[0].zoom = 1;
	cd[0].z_shx = 0;
	cd[0].z_shy = 0;
	cd[0].shift_x = 0;
	cd[0].shift_y = 0;
	cd[0].win1 = mlx_new_window(cd[0].mlx1, cd[0].s_x, cd[0].s_y, "FRACT1");
}
