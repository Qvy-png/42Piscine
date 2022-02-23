/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 23:04:32 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/17 23:09:37 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] && s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i])
	{
		if (!ft_strncmp(&str[i], to_find, len))
			return (&str[i]);
		i++;
	}
	return (0);
}
