/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:28:15 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/20 18:43:15 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	treat(char *av1, char *av3, char *sign)
{
	long	first;
	long	second;
	long	result;

	first = ft_atoi(av1);
	second = ft_atoi(av3);
	if (isSign(sign) == 0)
	{
		if (sign[0] == '/' && second == 0)
			ft_putstr("Stop : division by zero");
		else if (sign[0] == '%' && second == 0)
			ft_putstr("Stop : modulo by zero");
		else
		{
			result = calculation(first, second, sign);
			ft_putnbr(result);
		}
	}
	else
		ft_putnbr(0);
}
