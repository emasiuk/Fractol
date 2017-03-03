#include "fract.h"

void	change_fract(int keycode, t_win *cd)
{
	if (keycode == 18)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].color = 1000000;
		draw_mandel(cd);
	}
	if (keycode == 19)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].color = 1000000;
		draw_julia(cd);
	}
	if (keycode == 20)
	{
		mlx_destroy_image(cd[0].mlx1, cd[0].image);
		cd[0].iter = 50;
		cd[0].color = 1000000;
		draw_burning(cd);
	}
}

void	key_funct_for_all(int keycode, t_win *cd)
{
	change_fract(keycode, cd);
}
