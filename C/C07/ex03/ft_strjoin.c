/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:52:29 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/13 10:38:54 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*writeJoin(int size, char *tab, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (i++ < size - 1)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i + 1 < size)
		{
			tab[k] = sep[j];
			k++;
			j++;
		}
	}
	tab[k] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * (ft_strlen(sep));
	if (size == 0)
	{
		tab = malloc(0);
		tab[0] = '\0';
		return (tab);
	}
	tab = (char *)malloc(len * sizeof(char) + 1);
	if (tab == NULL)
		return (0);
	tab = writeJoin(size, tab, strs, sep);
	return (tab);
}
