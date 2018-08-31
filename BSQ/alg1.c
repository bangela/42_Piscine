#include "alg.h"

void	ft_putchar(char c, int i)
{
	write(i, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i], fd);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int i;
	int no;
	int sign;

	i = 0;
	no = 0;
	sign = 1;
	if (str == NULL)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
		return (0);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		no = no * 10 + (str[i] - 48);
		i++;
	}
	return (sign * no);
}

int **read_bsq(int fd, int size, int nr_p_lines, t_char ch)
{
	int **a;
	int i;
	int j;
	char c;
	i = 0;
	a = alloc_mem(size, nr_p_lines);
	while (i < size)
	{
		j = 0;
		while (j < nr_p_lines)
		{
			read(fd, &c, 1);
			if (c == ch.vid)
				a[i][j] = 1;
			else if (c == ch.obst)
				a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}

void print_bsq(int **a, int n, int m,t_char ch)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < m - 1)
		{
			if (a[i][j] == 0)
				ft_putchar(ch.obst, 1);
			else if (a[i][j] == 1)
				ft_putchar(ch.vid, 1);
			else if (a[i][j] == 5)
				ft_putchar(ch.repl, 1);
			j++;
		}
		ft_putchar('\n', 1);
		i++;
	}
}

