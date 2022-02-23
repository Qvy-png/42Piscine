/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:05:25 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/11 23:25:43 by wyuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bib.h"

int	ft_algo(int **tab, int max)
{
	if (work(tab, max, 1, 1))
	{
		ft_putstr("Error4\n");
		return (0);
	}
	return (1);
}

int	check_arg(int argc)
{
	if (argc < 2)
	{
		ft_putstr("Error1\n");
		return (0);
	}
	return (1);
}

int	validity(char *av, int max)
{
	if (valid(av, max))
	{
		ft_putstr("Error2\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		**tab;
	int		max;
	char	*av;

	av = argv[1];
	if (check_arg(argc) == 0)
		return (0);
	max = getMax(argv[1]);
	if (validity(argv[1], max) == 0)
		return (0);
	tab = tabCreator(max, argv[1]);
	if (tab == 0)
	{
		ft_putstr("Error3\n");
		return (0);
	}
	if (ft_algo(tab, max) == 0)
		return (0);
	display(tab, max);
	return (0);
}
