/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:32:04 by bangela           #+#    #+#             */
/*   Updated: 2018/08/14 20:38:14 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	ft_islowletter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		i++;
	}
	i++;
	while (str[i] != '\0')
	{
		if ((!ft_islowletter(str[i - 1]) && !ft_isnumber(str[i - 1]))
			&& ft_islowletter(str[i]))
		{
			str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return (str);
}
