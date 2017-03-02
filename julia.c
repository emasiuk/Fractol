#include "fract.h"

int		my_key_funct_julia(int keycode, t_win *cd)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 69)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter += 2;
		draw_julia(cd);
	}
	if (keycode == 78)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter -= 2;
		cd[0].iter > 3 ? draw_julia(cd) : 0;
	}
	if (keycode == 67)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].color += 10000;
		draw_julia(cd);
	}
	if (keycode == 75)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].color -= 10000;
		draw_julia(cd);
	}
	return (1);
}

void	coord_julia(t_win *cd, double i, double j)
{
	double x;
	double y;
	double temp;
	int iterr;

	x = cd[0].x_win;
	y = cd[0].y_win;
	iterr = 0;
	while ((x * x + y * y) < 4 && iterr < cd[0].iter)
	{
		temp = x * x - y * y + 0.285;
		y = 2 * x * y + 0.01;
		x = temp;
		iterr++;
	}
		ft_image_pixel_put(cd, j, i, cd[0].color * iterr);

}

void	draw_julia(t_win *cd)
{
	double i;
	double j;

	cd[0].image = mlx_new_image(cd[0].mlx1, cd[0].s_x, cd[0].s_y);
	i = -1;
	while (++i <= cd[0].s_y)
	{
		j = -1;
		cd[0].y_win = ((i - cd[0].s_y / 2) * 3) / cd[0].s_y;
		while (++j < cd[0].s_x)
		{
			cd[0].x_win = ((j - cd[0].s_x / 2) * 3) / cd[0].s_x;
			coord_julia(cd , i, j);
		}
	}
	mlx_put_image_to_window(cd[0].mlx1, cd[0].win1, cd[0].image, 0, 0);
	mlx_key_hook(cd[0].win1, my_key_funct_julia, cd);
}

void	Julia(t_win *cd)
{
	cd[0].x_win = 0;
	cd[0].y_win = 0;
	cd[0].color = 1000000;
	draw_julia(cd);
	mlx_loop(cd[0].mlx1);
}
