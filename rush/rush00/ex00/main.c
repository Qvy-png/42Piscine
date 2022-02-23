/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-agu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:02:10 by rdel-agu          #+#    #+#             */
/*   Updated: 2021/07/04 20:41:17 by rdel-agu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int x, int y);

int	my_atoi(char *str)
{
	int		sign;
	int		i;
	long	number;

	sign = 1;
	i = 0;
	number = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(my_atoi(argv[1]), my_atoi(argv[2]));
	return (0);
}
