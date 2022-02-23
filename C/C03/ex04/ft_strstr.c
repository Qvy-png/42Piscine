/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:59:52 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/07 10:19:39 by rdel-agu         ###   ########.fr       */
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
