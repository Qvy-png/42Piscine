/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileToStr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:38:43 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 22:42:59 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	file_is_good(char *file, int i)
{
	while (file[i])
	{
		while (file[i] == '\n')
			i++;
		if (!(file[i] <= '9' && file[i] >= '0'))
			return (0);
		while (file[i] >= '0' && file[i] <= '9')
			i++;
		while (file[i] == ' ')
			i++;
		if (file[i] != ':')
			return (0);
		i++;
		while (file[i] == ' ')
			i++;
		if (!(file[i] > 31 && file[i] != 127))
			return (0);
		while (file[i] && file[i] > 31 && file[i] != 127)
			i++;
		while (file[i] == ' ' || file[i] == '\n')
			i++;
	}
	return (1);
}

int	fileSize(char *str)
{
	int		i;
	int		ret;
	int		status;
	char	buffer[1];

	i = 0;
	ret = 1;
	status = open(str, O_RDWR);
	if (status != -1)
	{
		while (ret != 0)
		{
			ret = read(status, buffer, 1);
			i++;
		}
		close(status);
	}
	return (i);
}

char	*fileToStr(char *str)
{
	int		ret;
	int		status;
	char	*file;
	int		i;

	i = fileSize(str);
	file = (char *)malloc(sizeof(char) * i);
	if (!file)
		return (NULL);
	status = open(str, O_RDWR);
	if (status != -1)
	{
		ret = read(status, file, i);
		close(status);
	}
	if (status == -1 || !file_is_good(file, 0))
	{
		print_dict_error();
		free(file);
		return (NULL);
	}
	return (file);
}
