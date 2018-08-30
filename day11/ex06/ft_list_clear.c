/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 20:19:11 by bangela           #+#    #+#             */
/*   Updated: 2018/08/22 22:03:47 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *free_elem;

	if (*begin_list == NULL)
		return ;
	while (*begin_list != NULL)
	{
		free_elem = *begin_list;
		*begin_list = (*begin_list)->next;
		free(free_elem);
	}
	*begin_list = NULL;
}
