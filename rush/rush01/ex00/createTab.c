/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createTab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:03:52 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/11 19:59:32 by wyuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bib.h"

int	getMax(char *str)
{
	return (numOfNum(str) / 4);
}

void	tabFiller(int **tab, int max, char *params)
{
	int		i;

	i = 0;
	while (++i <= max)
		tab[0][i] = params[i - 1] - '0';
	i = 0;
	while (++i <= max)
		tab[max + 1][i] = params[i + 3] - '0';
	i = 0;
	while (++i <= max)
		tab[i][0] = params[i + 7] - '0';
	i = 1;
	while (i <= max)
	{
		tab[i][max + 1] = params[i + 11] - '0';
		i++;
	}
}

int	**tabCreator(int max, char *params)
{
	int		i;
	int		j;
	int		**tab;

	tab = (int **)malloc(sizeof(int *) * max + 2);
	i = 0;
	while (i < max + 2)
	{
		tab[i] = (int *)malloc(sizeof(int) * max + 2);
		i++;
	}
	i = -1;
	while (++i < max + 2)
	{
		j = -1;
		while (++j < max + 2)
			tab[i][j] = 0;
	}
	tabFiller(tab, max, params);
	return (tab);
}
