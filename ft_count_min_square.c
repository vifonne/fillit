/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_min_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:49:40 by mabouce           #+#    #+#             */
/*   Updated: 2018/11/16 10:50:06 by mabouce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_count_min_square_y_min(t_tetri *stock_tetri)
{
	int y_min;

	y_min = 0;
	y_min += stock_tetri->tab[2] * 2 + stock_tetri->tab[3] * 2
		+ stock_tetri->tab[5] * 2 + stock_tetri->tab[7] * 2
		+ stock_tetri->tab[8] * 2 + stock_tetri->tab[11] * 2
		+ stock_tetri->tab[13] * 2 + stock_tetri->tab[15] * 2
		+ stock_tetri->tab[17] * 2;
	y_min += stock_tetri->tab[4] * 3 + stock_tetri->tab[6] * 3
		+ stock_tetri->tab[9] * 3 + stock_tetri->tab[10] * 3
		+ stock_tetri->tab[12] * 3 + stock_tetri->tab[14] * 3
		+ stock_tetri->tab[16] * 3 + stock_tetri->tab[18] * 3;
	y_min += stock_tetri->tab[0] * 1;
	y_min += stock_tetri->tab[1] * 4;

	return (y_min);
}

int		ft_count_min_square(t_tetri *stock_tetri)
{
	int	x_min;
	int	y_min;

	x_min = 0;
	x_min += stock_tetri->tab[2] * 2 + stock_tetri->tab[4] * 2
		+ stock_tetri->tab[6] * 2 + stock_tetri->tab[9] * 2
		+ stock_tetri->tab[10] * 2 + stock_tetri->tab[12] * 2
		+ stock_tetri->tab[14] * 2 + stock_tetri->tab[16] * 2
		+ stock_tetri->tab[18] * 2;
	x_min += stock_tetri->tab[3] * 3 + stock_tetri->tab[5] * 3
		+ stock_tetri->tab[7] * 3 + stock_tetri->tab[8] * 3
		+ stock_tetri->tab[13] * 3 + stock_tetri->tab[15] * 3
		+ stock_tetri->tab[11] * 3 + stock_tetri->tab[17];
	x_min += stock_tetri->tab[0] * 4;
	x_min += stock_tetri->tab[1] * 1;
	y_min = ft_count_min_square_y_min(stock_tetri);
	return (ft_max(x_min, y_min));
}
