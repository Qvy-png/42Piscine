/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:22:51 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 23:25:38 by admaupie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	printM(int i, char *file)
{
	if (i == 1)
		treat("1000", file);
	if (i == 2)
		treat("1000000", file);
	if (i == 3)
		treat("1000000000", file);
	if (i == 4)
		treat("1000000000000", file);
	if (i == 5)
		treat("1000000000000000", file);
	if (i == 6)
		treat("1000000000000000000", file);
	if (i == 7)
		treat("1000000000000000000000", file);
	if (i == 8)
		treat("1000000000000000000000000", file);
	if (i == 9)
		treat("1000000000000000000000000000", file);
	if (i == 10)
		treat("1000000000000000000000000000000", file);
	if (i == 11)
		treat("1000000000000000000000000000000000", file);
	if (i == 12)
		treat("1000000000000000000000000000000000000", file);
}

int	modulo10str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoin(char *nbr, int n)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (i < n)
	{
		nb = nb * 10 + nbr[i] - 48;
		i++;
	}
	return (nb);
}

int	size_int(char *nbr)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (nbr[i] == '0')
		i++;
	while (nbr[i + size])
		size++;
	return (size);
}

void	printinf(char *nbr, char *file, int n)
{
	int	size;
	int	nb;

	size = size_int(nbr);
	n = size % 3;
	if (!n)
		n = 3;
	while (*nbr == '0')
		nbr++;
	while (size > 3)
	{
		nb = ft_atoin(nbr, n);
		belowThousand(nb, file);
		if (nb)
		{
			write(1, " ", 1);
			printM((size - 1) / 3, file);
			if (modulo10str(nbr))
				write(1, " ", 1);
		}
		size = size - n;
		nbr = nbr + n;
		n = 3;
	}
	belowThousand(ft_atoi(nbr), file);
}
