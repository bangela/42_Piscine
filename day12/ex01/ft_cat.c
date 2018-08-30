/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 18:47:50 by bangela           #+#    #+#             */
/*   Updated: 2018/08/23 21:15:44 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

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

void	ft_error(void)
{
	if (errno == EACCES)
		ft_putstr("Permission denied", 2);
	else if (errno == ENAMETOOLONG)
		ft_putstr("Filename too long", 2);
	else if (errno == ENOENT)
		ft_putstr("No such file or directory", 2);
	else if (errno == EPERM)
		ft_putstr("Operation not permitted", 2);
	else if (errno == EAGAIN)
		ft_putstr("Try again", 2);
	else if (errno == EISDIR)
		ft_putstr("Is a directory", 2);
	else if (errno == EINVAL)
		ft_putstr("Invalid argument", 2);
	else if (errno == EFBIG)
		ft_putstr("File too large", 2);
	else if (errno == ESPIPE)
		ft_putstr("Illegal seek", 2);
	else if (errno == EBADF)
		ft_putstr("Bad file number", 2);
	else if (errno == EFAULT)
		ft_putstr("Bad address", 2);
	else if (errno == ENFILE)
		ft_putstr("File table overflow", 2);
}

void	ft_input_mode(void)
{
	char c;

	while (read(0, &c, 1))
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	a;
	int		fd;
	int		i;

	i = 1;
	if (argc == 1)
		ft_input_mode();
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(2, "cat: ", 5);
			ft_putstr(argv[i], 2);
			write(2, ": ", 2);
			ft_error();
			write(2, "\n", 1);
		}
		else
			while (read(fd, &a, 1) != 0)
				ft_putchar(a, 1);
		close(fd);
		i++;
	}
	return (0);
}
