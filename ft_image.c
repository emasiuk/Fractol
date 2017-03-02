#include "fract.h"

void    ft_image_pixel_put(t_win *cd, int x, int y, int rgb)
{
    int             bpp;
    int             sl;
    int             en;
    char            *image;
    unsigned int    tmp;

    image = mlx_get_data_addr(cd[0].image, &bpp, &sl, &en);
    tmp = (mlx_get_color_value(cd[0].mlx1, rgb));
    if (x > 0 && x < cd[0].s_x && y > 0 && y < cd[0].s_y)
        ft_memcpy((void *)(image + y * cd[0].s_x * (bpp / 8)) + x * (bpp / 8),
            (void *)&tmp, 4);
}
