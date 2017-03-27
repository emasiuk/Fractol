/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emasiuk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 14:27:59 by emasiuk           #+#    #+#             */
/*   Updated: 2017/03/13 14:27:59 by emasiuk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fract.h"

char	*ftoa_d(long double num, int precision)
{
	int		i;
	int		j;
	char	*str;
	char	*res;

	i = -1;
	while (++i <= precision)
	{
		num /= 0.1;
	}
	num < 0 ? num -= 2 : 0;
	str = ft_itoa((long long int)num + 1);
	res = (char *)malloc(sizeof(char) * ft_strlen(str));
	i = -1;
	j = 0;
	while ((unsigned long)++i < ft_strlen(str))
		if ((size_t)i == (ft_strlen(str) - precision - 1))
			res[i] = '.';
		else
		{
			res[i] = str[j];
			j++;
		}
	free(str);
	return (res);
}

void	string(t_win *cd)
{
	int zoom;

	zoom = (int)cd[0].zoom;
	mlx_string_put(cd[0].mlx1, cd[0].win1, 5, 5, 0xFFFFFF,
					ft_strjoin("iteration = ", ft_itoa(cd[0].iter)));
	mlx_string_put(cd[0].mlx1, cd[0].win1, 5, 20, 0xFFFFFF, "change fract 1-4");
	mlx_string_put(cd[0].mlx1, cd[0].win1, 5, 35, 0xFFFFFF,
					ft_itoa(cd[0].color));
	if (zoom == -2147483648)
		mlx_string_put(cd[0].mlx1, cd[0].win1, 5, 50, 0xFFFFFF,
						"zoom = OVER999999999");
	else
		mlx_string_put(cd[0].mlx1, cd[0].win1, 5, 50, 0xFFFFFF,
						ft_strjoin("zoom = ", ft_itoa(cd[0].zoom)));
}
