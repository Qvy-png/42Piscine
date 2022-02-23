/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:33:24 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/16 13:48:42 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}
