/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:11:37 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/07 09:47:32 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dSize;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	dSize = ft_strlen(dest);
	j = dSize;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[i] && i < size - dSize - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ft_strlen(src) + dSize);
}
