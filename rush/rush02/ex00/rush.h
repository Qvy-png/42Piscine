/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:50:28 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/18 23:25:49 by admaupie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
void			ft_putchar(char c);
void			ft_putstr(char *str);
unsigned int	ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
int				fileSize(char *str);
char			*fileToStr(char *str);
int				ft_atoi(char *str);
void			treat(char *str, char *file);
void			belowTen(int nbr, char *file);
void			belowTwenty(int nbr, char *file);
void			belowHundred(int nbr, char *file);
void			belowThousand(int nbr, char *file);
void			printM(int i, char *file);
int				modulo10str(char *str);
int				ft_atoin(char *nbr, int n);
void			printinf(char *nbr, char *file, int n);
void			print_error(void);
void			print_dict_error(void);
int				is_error(char *nbr);
void			print_error(void);
void			print_dict_error(void);
int				file_is_good(char *file, int i);
int				size_int(char *nbr);
#endif
