/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 19:03:40 by bangela           #+#    #+#             */
/*   Updated: 2018/08/21 21:37:22 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	add(int tab)
{
	return (++tab);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab2;

	i = 0;
	tab2 = (int *)malloc(length * sizeof(int));
	if (tab2 == NULL)
		return (NULL);
	while (i < length)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab2);
}
