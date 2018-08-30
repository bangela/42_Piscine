/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:44:39 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 17:50:00 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		write_alert(void)
{
	write(1, "Alert!!!\n", 9);
	return (0);
}

int		ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

int		ft_alert(char *argv, int i)
{
	if (ft_strncmp(argv, "president", 9) == 0)
	{
		i = 9;
		while (argv[i] == ' ' || argv[i] == '\t')
			i++;
		if (argv[i] == '\0')
			return (write_alert());
	}
	if (ft_strncmp(argv, "attack", 6) == 0)
	{
		i = 6;
		while (argv[i] == ' ' || argv[i] == '\t')
			i++;
		if (argv[i] == '\0')
			return (write_alert());
	}
	if (ft_strncmp(argv, "bauer", 5) == 0)
	{
		i = 5;
		while (argv[i] == ' ' || argv[i] == '\t')
			i++;
		if (argv[i] == '\0')
			return (write_alert());
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < argc)
	{
		while (*argv[i] == ' ' || *argv[i] == '\t' || *argv[i] == '\n' ||
				*argv[i] == '\v' || *argv[i] == '\f' || *argv[i] == '\r')
			argv[i]++;
		argv[i] = ft_strlowcase(argv[i]);
		i++;
		if (ft_alert(argv[i], 0) == 0)
			return (0);
	}
	return (0);
}
