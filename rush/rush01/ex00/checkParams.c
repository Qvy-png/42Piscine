/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkParams.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:48:36 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/11 22:37:09 by wyuen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bib.h"

int	numOfNum(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			j++;
		i++;
	}
	return (j);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	spaceCleanse(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		str[i] = str[j];
		i++;
		j += 2;
	}
	str[i] = '\0';
}

int	valid(char *str, int max)
{
	int	i;

	i = 0;
	spaceCleanse(str);
	while (str[i])
	{
		if (!(str[i] <= max + 48 && str[i] >= 49))
			return (1);
		i++;
	}
	if (ft_strlen(str) != 16)
		return (1);
	return (0);
}
