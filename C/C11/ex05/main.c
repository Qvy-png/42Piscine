/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:40:45 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/20 18:35:20 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	isSign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '/' || str[i] == '+' || str[i] == '%'
			 || str[i] == '*')
			i++;
		else
			return (1);
	}
	return (0);
}

int	calculation(int	first, int second, char *sign)
{
	if (sign[0] == '/' && second != 0)
		return (first / second);
	if (sign[0] == '*')
		return (first * second);
	if (sign[0] == '+')
		return (first + second);
	if (sign[0] == '-')
		return (first - second);
	if (sign[0] == '%' && second != 0)
		return (first % second);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		treat(argv[1], argv[3], argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
