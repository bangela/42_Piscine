/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:35:02 by bangela           #+#    #+#             */
/*   Updated: 2018/08/22 21:55:09 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*elem;

	i = 0;
	if (begin_list == NULL)
		return (0);
	elem = begin_list;
	while (elem != NULL)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}
