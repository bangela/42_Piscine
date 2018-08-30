/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:13:35 by bangela           #+#    #+#             */
/*   Updated: 2018/08/24 21:16:52 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **r, void *item, int (*cmpf)(void *, void *))
{
	if (*r == NULL)
		*r = btree_create_node(item);
	else if (cmpf(item, (*r)->item) < 0)
		btree_insert_data(&(*r)->left, item, cmpf);
	else if (cmpf(item, (*r)->item) >= 0)
		btree_insert_data(&(*r)->right, item, cmpf);
}
