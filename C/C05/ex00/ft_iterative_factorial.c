/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:09:59 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/07 16:59:49 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	i = 1;
	fac = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fac = i * fac;
		i++;
	}
	return (fac);
}
