#ifndef BIB_H
# define BIB_H

# include <unistd.h>
# include <stdlib.h>

int		valid(char *str, int max);

int		numOfNum(char *str);

void	display(int **tab, int max);

int		**tabCreator(int max, char *params);

int		getMax(char *str);

int		checkFlat(int **tab, int max);

int		work(int	**tab, int max, int x, int y);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	display(int **tab, int max);

#endif
