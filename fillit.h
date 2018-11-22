/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:41:41 by vifonne           #+#    #+#             */
/*   Updated: 2018/11/22 16:06:49 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_tetri
{
	int			tab[2][19];
}				t_tetri;

int				ft_put_tetri_in_sq(char **square, int x, int y, int index, int edge, int pcs);
int				ft_del_tetri_in_sq(char **square, char c);
int				ft_calc_edge(t_tetri *stock_tetri, int sizeplus);
int				ft_backtrack(char **square, t_tetri *stock_tetri, int x, int y, int pcs, int edge);
int				ft_count_tetri(t_tetri *stock_tetri);
int				ft_check_line(char *str, int nb_tetri, int nb_line);
int				ft_check_input(char *str);
int				ft_check_dim(char *str);
int				ft_check_dim2(char *str);
void			ft_print_square(char **square);
void			ft_resolve(t_tetri *stock_tetri);
void			ft_cut_to_tetri(char **tetri);
void			ft_set_stock_to_zero(t_tetri *stock_tetri);
void			ft_error(void);
void			ft_sqdel(char **square);
void			ft_set_tab_point(char **square, int square_size);

char			*ft_read_file(char *filename);
char			*ft_swap_nl_to_x(char *str);
char			*ft_set_in_one_line(char *str);
char			**ft_init_tetri_base_for_put(void);
char			**ft_init_tetri_base(void);
char			**ft_set_square(t_tetri *stock_tetri, int sizeplus);



t_tetri			*ft_parsing(char **av, t_tetri *stock_tetri);
t_tetri			*ft_check_match(char *tetri, char **tetri_base, t_tetri *stock_tetri);

#endif
