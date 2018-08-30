/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:56:13 by bangela           #+#    #+#             */
/*   Updated: 2018/08/22 22:01:13 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*elem;

	i = 0;
	while (ac > 1)
	{
		list = NULL;
		while (i < ac)
		{
			elem = ft_create_elem(av[i]);
			elem->next = list;
			list = elem;
			++i;
		}
		return (elem);
	}
	return (0);
}
