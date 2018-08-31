#include "alg.h"

int min(int a, int b, int c)
{
	int min = a;
	if (min > b) 
		min = b;
	if (min > c) 
		min = c;
	return min;
}

int	length(char *str)
{
	int size;
	int fd;
	char a;

	size = 0;
	fd = open(&str[size], O_RDONLY);
	while (read(fd,&a,1) != 0)
		size++;
	close(fd);
	return(size);
}

int s_line(char *str, int *size, t_char *ch, int *fd)
{
	char *a;
	int i;

	i = 0;
	a = (char *)malloc(length(str) * sizeof(char));
	*fd = open(&str[i], O_RDONLY);
	while (read(*fd, &a[i], 1))
	{
		if(a[i] == '\n')
			break;
		i++;
	}
	ch->repl = a[i-1];
	ch->obst = a[i-2];
	ch->vid = a [i-3];
	a[i-3] = '\0';
	*size = ft_atoi(a);

	return(length(str) - i - 1);
}


