/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <bangela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 16:59:22 by bangela           #+#    #+#             */
/*   Updated: 2018/08/13 19:17:23 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
