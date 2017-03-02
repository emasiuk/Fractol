#include "fract.h"

void	ft_putfract()
{
	ft_putstr("1 - Mandelbrot\n");
	ft_putstr("2 - Julia\n");
	ft_putstr("3 - my_fract\n");
	ft_putstr("4\n");
	ft_putstr("5\n");
	ft_putstr("6\n");
}

void make_window(t_win *cd)
{
	cd[0].mlx1 = mlx_init();
	cd[0].s_x = 800;
	cd[0].s_y = 800;
	cd[0].win1 = mlx_new_window(cd[0].mlx1, cd[0].s_x, cd[0].s_y, "FRACT1");
}

int		main(int argc, char **argv)
{
	t_win *cd;

	cd = (t_win *)malloc(sizeof(t_win) * 1);
	if (argc == 2 && (argv[1][0] > '0' && argv[1][0] < '7'))
	{
		if (argv[1][0] == '1')
			Mandelbrot(cd);
	// 	if (argv[1] == "2")
	// 		Julia();
	// 	if (argv[1] == "3")
	// 		my_fract1();
	// 	if (argv[1] == "4")
	// 		my_fract2();
	// 	if (argv[1] == "5")
	// 		my_fract3();
	// 	if (argv[1] == "6")
	// 		my_fract4();
	}
	else
		ft_putfract();
}
