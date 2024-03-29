/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/21 14:31:08 by averheij       #+#    #+#                */
/*   Updated: 2019/09/21 15:12:17 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

void				ft_show_tab(struct s_stock_par *par);

int					main(int argc, char **argv)
{
	int				i;
	t_stock_par		*boxes;

	boxes = ft_param_to_tab(argc, argv);
	i = 0;
	if (boxes)
	{
		ft_show_tab(boxes);
		return (1);
	}
	else
		return (0);
}
