/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:26:54 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/04 17:27:15 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	affich_premier(int ligne, int hauteur)
{
	if (ligne == 1)
		ft_putchar('/');
	else if (ligne == hauteur)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	affich_milieu(int ligne, int hauteur, int largeur)
{
	int	k;

	k = 1;
	while (k < largeur - 1)
	{
		if (ligne == 1 || ligne == hauteur)
			ft_putchar('*');
		else
			ft_putchar(' ');
		k++;
	}
}

void	affich_dernier(int ligne, int hauteur)
{
	if (ligne == 1)
		ft_putchar(92);
	else if (ligne == hauteur)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	ligne;
	int	carac;

	ligne = 1;
	while (ligne <= y)
	{
		carac = 0;
		while (carac < x)
		{
			affich_premier(ligne, y);
			carac++;
			affich_milieu(ligne, y, x);
			carac = carac + (x - 2);
			carac++;
			if (x > 1)
				affich_dernier(ligne, y);
			carac++;
		}
		if (x > 0)
			ft_putchar('\n');
		ligne++;
	}
}
