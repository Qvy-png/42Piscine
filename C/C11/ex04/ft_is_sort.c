/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:26:29 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/21 10:41:39 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			up = 1;
		else if (f(tab[i], tab[i + 1]) < 0)
			down = 1;
		if (up == 1 && down == 1)
			return (0);
		i++;
	}
	return (1);
}
