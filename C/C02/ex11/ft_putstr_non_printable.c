/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:50:32 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/15 13:53:10 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convertionHex(unsigned char c)
{
	char	*tab;

	tab = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(tab[c / 16]);
	ft_putchar(tab[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i])
			ft_putchar(str[i]);
		else
			convertionHex(str[i]);
		i++;
	}
}
