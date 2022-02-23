/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 22:22:53 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 23:23:04 by admaupie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_error(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '\0')
		return (1);
	if (size_int(nbr) > 39)
		return (1);
	while (nbr[i])
	{
		if (!(nbr[i] >= '0' && nbr[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
}

void	print_dict_error(void)
{
	write(2, "Dict Error\n", 11);
}
