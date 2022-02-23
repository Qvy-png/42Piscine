/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:41:55 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 11:51:37 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = min;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
