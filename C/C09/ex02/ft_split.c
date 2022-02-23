/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:59:16 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/20 11:01:02 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isInSep(char n, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	wordCounter(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (isInSep(str[i], charset) == 0 && str[i])
		{
			count++;
			while (isInSep(str[i], charset) == 0 && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*cuttingMachine(int *i, char *str, int size)
{
	int		j;
	char	*tab;

	tab = malloc(sizeof(char) * size + 1);
	if (!tab)
		return (NULL);
	j = 0;
	while (j < size)
	{
		tab[j] = str[*i];
		j++;
		*i = *i + 1;
	}
	tab[size] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	char	**result;

	i = 0;
	len = 0;
	result = malloc(sizeof(char *) * (wordCounter(str, charset) + 1));
	if (!result)
		return (NULL);
	result[wordCounter(str, charset)] = NULL;
	while (str[i])
	{
		if (isInSep(str[i], charset) == 0 && str[i])
		{
			j = 0;
			while (isInSep(str[i + j], charset) == 0 && str[i + j])
				j++;
			result[len] = cuttingMachine(&i, str, j);
			len++;
		}
		else
			i++;
	}
	return (result);
}
