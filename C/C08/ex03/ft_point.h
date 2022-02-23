/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:26:49 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/13 10:43:36 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct t_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);
#endif
