/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:48:43 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 16:14:02 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>
void	treat(char *av1, char *av3, char *av2);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		isCorrect(char *str);
int		isSign(char *str);
int		calculation(int first, int second, char *sign);
#endif
