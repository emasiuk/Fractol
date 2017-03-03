#include "fract.h"

void	ft_putfract()
{
	ft_putstr("1 - Mandelbrot\n");
	ft_putstr("2 - Julia\n");
	ft_putstr("3 - Burning ship\n");
	ft_putstr("4\n");
	ft_putstr("5\n");
	ft_putstr("6\n");
}


int		main(int argc, char **argv)
{
	t_win *cd;

	cd = (t_win *)malloc(sizeof(t_win) * 1);
	make_window(cd);
	if (argc == 2 && (argv[1][0] > '0' && argv[1][0] < '7'))
	{
		if (argv[1][0] == '1')
		{
			Mandelbrot(cd);
		}
		if (argv[1][0] == '2')
			Julia(cd);
		if (argv[1][0] == '3')
			Burning_ship(cd);
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
