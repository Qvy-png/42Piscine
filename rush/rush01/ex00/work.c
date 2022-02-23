/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:10:38 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/11 14:10:44 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bib.h"

int	checkColUp(int **tab, int x, int max)
{
	int		count;
	int		i;
	int		y;

	y = 1;
	count = 1;
	i = 1;
	while (y + i <= max)
	{
		if (tab[x][y] < tab[x][y + i])
		{
			count++;
			y += i;
			i = 1;
		}
		else
			i++;
	}
	if (count == tab[x][0])
		return (0);
	else
		return (1);
}

int	checkColDown(int **tab, int x, int max)
{
	int		count;
	int		y;
	int		i;

	y = max;
	count = 1;
	i = 1;
	while (y - i >= 1)
	{
		if (tab[x][y] < tab[x][y - i])
		{
			count++;
			y -= i;
			i = 1;
		}
		else
			i++;
	}
	if (count == tab[x][max + 1])
		return (0);
	else
		return (1);
}

int	checkLeftRow(int **tab, int y, int max)
{
	int		count;
	int		x;
	int		i;

	x = 1;
	count = 1;
	i = 1;
	while (x + i <= max)
	{
		if (tab[x][y] < tab[x + i][y])
		{
			count++;
			x += i;
			i = 1;
		}
		else
			i++;
	}
	if (count == tab[0][y])
		return (0);
	else
		return (1);
}

int	checkRightRow(int **tab, int y, int max)
{
	int		count;
	int		x;
	int		i;

	x = max;
	count = 1;
	i = 1;
	while (x - i >= 1)
	{
		if (tab[x][y] < tab[x - i][y])
		{
			count++;
			x -= i;
			i = 1;
		}
		else
			i++;
	}
	if (count == tab[max + 1][y])
		return (0);
	else
		return (1);
}

int	checkFlat(int **tab, int max)
{
	int		i;

	i = 1;
	while (i <= max)
	{
		if (checkColUp(tab, i, max))
			return (1);
		if (checkColDown(tab, i, max))
			return (1);
		if (checkLeftRow(tab, i, max))
			return (1);
		if (checkRightRow(tab, i, max))
			return (1);
		i++;
	}
	return (0);
}
