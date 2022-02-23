/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:06:35 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 11:33:45 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (src[count])
		count++;
	str = (char *)malloc(sizeof(*str) * (count + 1));
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
