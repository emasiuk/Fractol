#include "fract.h"

int		my_key_funct(int keycode, t_win *cd)
{
	if (keycode == 53)
		exit(0);
	return (1);
}





void	coord_mandel(t_win *cd, int i, int j)
{
	double x;
	double y;
	double temp;
	int iter;

	x = 0;
	y = 0;
	iter = 0;
	while ((x*x + y *y) < 4 && iter < 50)
	{
		temp = x*x - y *y + cd[0].x_win;
		y = 2 * x * y + cd[0].y_win;
		x = temp;
		iter++;
	}
	if (iter < 25)
		ft_image_pixel_put(cd, j, i, cd[0].color * iter);
	else
		ft_image_pixel_put(cd, j, i, 0);
}




void	Mandelbrot(t_win *cd)
{
	double i;
	double j;

	i = -1;
	cd[0].mlx1 = mlx_init();
	cd[0].s_x = 800;
	cd[0].s_y = 800;
	cd[0].win1 = mlx_new_window(cd[0].mlx1, cd[0].s_x, cd[0].s_y, "FRACT1");
	cd[0].x_win = 0;
	cd[0].y_win = 0;
	cd[0].color = 272;
	cd[0].image = mlx_new_image(cd[0].mlx1, cd[0].s_x, cd[0].s_y);
	while (++i <= cd[0].s_y)
	{
		j = -1;
		cd[0].y_win = ((i - cd[0].s_y / 2) * 4) / cd[0].s_y;
		while (++j < cd[0].s_x)
		{
			cd[0].x_win = ((j - cd[0].s_x / 2) * 4) / cd[0].s_x;
			coord_mandel(cd , i, j);
		}
	}
	mlx_put_image_to_window(cd[0].mlx1, cd[0].win1, cd[0].image, 0, 0);
	mlx_key_hook(cd[0].win1, my_key_funct, cd);
	mlx_loop(cd[0].mlx1);
}
