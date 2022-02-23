/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:48:55 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/13 11:27:13 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*copy;

	i = 0;
	while (str[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * i + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*struct_str;

	struct_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (struct_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		struct_str[i].size = ft_strlen(av[i]);
		struct_str[i].str = av[i];
		struct_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	struct_str[i].str = 0;
	return (&*struct_str);
}
