/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   workSec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:00:07 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/11 23:31:13 by wyuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bib.h"

int	finalCheck(int **tab, int i, int x, int max)
{
	int	row;
	int	column;

	row = 1;
	column = 1;
	while (row <= max)
	{
		if (i == tab[x][row])
			return (1);
		row++;
	}
	while (column <= max)
	{
		if (i == tab[x][column])
			return (1);
		column++;
	}
	return (0);
}

int	work(int **tab, int max, int x, int y)
{
	int	i;

	i = 1;
	while (1)
	{
		while (i <= max && finalCheck(tab, i, x, max))
			i++;
		if (i <= max)
			tab[x][y] = i;
		else
		{
			tab[x][y] = 0;
			return (1);
		}
		if (x == max && y == max)
		{
			if (checkFlat(tab, max))
			{
				if (i > max)
				{
					tab[x][y] = 0;
					return (1);
				}
				else
					continue ;
			}
			else
				return (0);
		}
		if (x == max)
		{
			if (work(tab, max, 1, y + 1))
				continue ;
			return (0);
		}
		else
		{
			if (work(tab, max, x + 1, y))
				continue ;
			return (0);
		}
	}
}
