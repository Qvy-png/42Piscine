/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   belowNum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 23:12:23 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 22:32:28 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	belowTen(int nbr, char *file)
{
	char	fonc[2];

	if (nbr != 0)
	{
		fonc[0] = nbr + '0';
		fonc[1] = '\0';
		treat(fonc, file);
	}
}

void	belowTwenty(int nbr, char *file)
{
	if (nbr == 11)
		treat("11", file);
	if (nbr == 12)
		treat("12", file);
	if (nbr == 13)
		treat("13", file);
	if (nbr == 14)
		treat("14", file);
	if (nbr == 15)
		treat("15", file);
	if (nbr == 16)
		treat("16", file);
	if (nbr == 17)
		treat("17", file);
	if (nbr == 18)
		treat("18", file);
	if (nbr == 19)
		treat("19", file);
}

void	belowHundred(int nbr, char *file)
{
	int		tens;
	int		units;
	char	fonc[3];

	if (nbr < 20 && nbr >= 11)
		belowTwenty(nbr, file);
	else if (nbr < 10)
		belowTen(nbr, file);
	else
	{
		tens = nbr / 10;
		tens = tens * 10;
		units = nbr % 10;
		fonc[0] = (tens / 10) + '0';
		fonc[1] = (tens % 10) + '0';
		fonc[2] = '\0';
		treat(fonc, file);
		if (units != 0)
		{
			ft_putchar(' ');
			belowTen(units, file);
		}
	}
}

void	belowThousand(int nbr, char *file)
{
	int		hundreds;
	char	fonc[2];

	hundreds = 0;
	if (nbr > 99)
	{
		hundreds = nbr / 100;
		fonc[0] = hundreds + '0';
		fonc[1] = '\0';
		treat(fonc, file);
		ft_putchar(' ');
		treat("100", file);
	}
	if (nbr % 100)
	{
		if (nbr > 99)
			ft_putstr(" ");
		belowHundred(nbr - (hundreds * 100), file);
	}
}
