/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:22:51 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 23:26:18 by admaupie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		size_int(char *nbr);

char	*whereisnb(char *file, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (file[i])
	{
		j = 0;
		if ((i == 0 || file [i - 1] == '\n') && file[i] == str[j])
		{
			while (file[i] && str[j] && file[i] == str[j])
			{
				j++;
				i++;
			}
			if (file[i] && str[j] == '\0' && (file[i] == ' ' || file[i] == ':'))
				return (file + i - j);
			i = i - j;
		}
		i++;
	}
	return (NULL);
}

int	strlen_special(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	if (i)
		i--;
	while (str[i] == ' ')
		i--;
	return (i - 2);
}

void	treat(char *str, char *file)
{
	int		j;
	char	*test;
	int		max;
	int		i;

	j = 0;
	i = 0;
	test = whereisnb(file, str);
	while (test[j] == ' ' || (test[j] >= 9 && test[j] <= 13))
		j++;
	while (test[j] != ':')
		j++;
	j++;
	while (test[j] == ' ' || (test[j] >= 9 && test[j] <= 13))
		j++;
	max = strlen_special(test);
	while (i < max && test[j] != '\n')
	{
		ft_putchar(test[j]);
		j++;
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*file;

	if (argc > 3 || argc <= 1 || is_error(argv[argc - 1]) == 1
		|| ((size_int(argv[argc - 1]) > 39)))
	{
		print_error();
		return (0);
	}
	if (argc == 2)
		file = fileToStr("numbers.dict");
	else
		file = fileToStr(argv[1]);
	if (!file)
		return (0);
	printinf(argv[argc - 1], file, 42);
	if (!atoi(argv[argc - 1]) && argv[argc - 1][0] == '0')
		treat("0", file);
	ft_putchar('\n');
	free(file);
	return (0);
}
