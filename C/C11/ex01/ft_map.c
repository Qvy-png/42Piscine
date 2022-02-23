/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:12:18 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/20 21:16:23 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int	*tab, int length, int(*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	if (res == NULL)
		return (NULL);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
