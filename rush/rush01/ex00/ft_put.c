/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyuen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 22:41:21 by wyuen             #+#    #+#             */
/*   Updated: 2021/07/11 23:13:07 by wyuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	display(int **tab, int max)
{
	int		x;
	int		y;

	x = 1;
	while (x <= max)
	{
		y = 1;
		while (y <= max)
		{
			ft_putchar(tab[x][y] + '0');
			if (y != max)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
