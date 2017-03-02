#ifndef _FRACT_H
# define _FRACT_H
# define RAD (0.0175433)
# include "mlx.h"
# include <math.h>
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_win
{
	void *mlx1;
	void *mlx2;
	void *win1;
	void *win2;
	double mandel_x;
	double mandel_y;
	int				s_x;
	int				s_y;
	void *image;
	int max_n;
	double y_win;
	double x_win;
	int color;
}				t_win;


void make_window(t_win *cd);
void    ft_image_pixel_put(t_win *cd, int x, int y, int rgb);
void	Mandelbrot(t_win *cd);


#endif
