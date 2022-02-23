/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:43:19 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/01 12:27:53 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printEnd(char i, char j, char k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
	}
	else
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				printEnd(i, j, k);
				k++;
			}
			k = ++j + 1;
		}
		j = ++i + 1;
	}
}
