/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:49:23 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/07 22:00:24 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checkBase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_print_number(unsigned int nb, char *base, int baseSize)
{
	unsigned int	nbCopy;

	nbCopy = nb / baseSize;
	if (nbCopy >= 1)
	{
		nb = nb % baseSize;
		ft_print_number(nbCopy, base, baseSize);
	}
	ft_putchar(base[nb]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	Unb;
	int				baseSize;

	baseSize = checkBase(base);
	if (!baseSize)
		return ;
	if (nbr < 0)
	{
		Unb = -nbr;
		ft_putchar('-');
	}
	else
		Unb = nbr;
	ft_print_number(Unb, base, baseSize);
}
