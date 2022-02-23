/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 20:56:31 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/04 10:35:32 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;
	int	swap;

	i = 0;
	rev = size - 1;
	while (i < rev)
	{
		swap = tab[i];
		tab[i] = tab[rev];
		tab[rev] = swap;
		i++;
		rev--;
	}
}
