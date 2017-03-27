/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:26:07 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:26:07 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

void	ft_putfract(void)
{
	ft_putstr("1 - Mandelbrot\n");
	ft_putstr("2 - Julia\n");
	ft_putstr("3 - Burning ship\n");
	ft_putstr("4 - My_fract\n");
}

int		main(int argc, char **argv)
{
	t_win *cd;

	cd = (t_win *)malloc(sizeof(t_win) * 1);
	make_window(cd);
	if (argc == 2)
	{
		if (!(ft_strcmp(argv[1], "1")))
			mandelbrot(cd);
		else if (!(ft_strcmp(argv[1], "2")))
			julia(cd);
		else if (!(ft_strcmp(argv[1], "3")))
			burning_ship(cd);
		else if (!(ft_strcmp(argv[1], "4")))
			my_fract(cd);
		else
			ft_putfract();
	}
	else
		ft_putfract();
}
