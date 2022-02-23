/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advance_sort_string_tab.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:03:38 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/20 18:43:45 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i + 1])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			else
				j++;
		}
		i++;
	}
}
