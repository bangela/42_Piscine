/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 19:33:09 by bangela           #+#    #+#             */
/*   Updated: 2018/08/16 21:19:21 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *n;
	int i;
	int m;

	i = 0;
	m = max - min;
	if (min >= max)
		return (NULL);
	n = (int*)malloc((max - min) * (sizeof(int)));
	if (n == NULL)
		return (NULL);
	while (i < m)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
