/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:53:06 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 13:40:40 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isSep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	isWord(char c, char cMinus, char *charset)
{
	return (!isSep(c, charset) && isSep(cMinus, charset));
}

int	wordCounter(char *str, char *charset)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i])
	{
		if (isWord(str[i], str[i - 1], charset)
			|| (!isSep(str[i], charset) && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int	*wordMeasure(char *str, char *charset)
{
	int	k;
	int	i;
	int	words_count;
	int	*words_size;

	i = 0;
	words_count = wordCounter(str, charset);
	words_size = malloc(words_count * sizeof(int));
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	k = 0;
	while (str[i])
	{
		if (!isSep(str[i], charset))
			words_size[k]++;
		else if (i > 0 && !isSep(str[i - 1], charset))
			k++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		k;
	int		*wordsSize;

	words = (char **)malloc((wordCounter(str, charset) + 1) * sizeof(char *));
	wordsSize = wordMeasure(str, charset);
	k = 0;
	j = 0;
	i = -1;
	while (str[++i])
	{
		if (!isSep(str[i], charset))
		{
			if (i == 0 || isWord(str[i], str[i - 1], charset))
				words[k] = malloc(wordsSize[k] * sizeof(char));
			words[k][j] = str[i];
			words[k][++j] = '\0';
		}
		else if (i > 0 && !isSep(str[i - 1], charset) && ++k)
			j = 0;
	}
	words[wordCounter(str, charset)] = 0;
	return (words);
}
