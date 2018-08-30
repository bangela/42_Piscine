/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:41:05 by bangela           #+#    #+#             */
/*   Updated: 2018/08/22 22:08:17 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*elem;

	i = 0;
	elem = begin_list;
	while (elem != NULL)
	{
		if (i == nbr)
			return (elem);
		elem = elem->next;
		i++;
	}
	return (NULL);
}
