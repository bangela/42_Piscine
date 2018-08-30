/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 20:58:30 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 21:31:25 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *n;
	int i;
	int m;

	i = 0;
	m = max - min;
	if (min >= max)
		return (0);
	n = (int*)malloc((max - min) * (sizeof(int)));
	if (n == NULL)
		return (0);
	while (i < m)
	{
		n[i] = min;
		min++;
		i++;
	}
	*range = n;
	return (m);
}
