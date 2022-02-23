/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:21:07 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/09 08:50:05 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 0)
		return (2);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = ft_is_prime(nb);
	if (i == 1)
	{
		return (nb);
	}
	else
		while (ft_is_prime(nb) != 1)
			nb++;
	return (nb);
}
