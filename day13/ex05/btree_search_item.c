/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 20:29:27 by bangela           #+#    #+#             */
/*   Updated: 2018/08/24 21:19:25 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	*btree_search_item(t_btree *r, void *data, int (*cmpf)(void *, void*))
{
	if (r == NULL)
		return (NULL);
	else if (cmpf(data, r->item) == 0)
		return (r->item);
	else if (cmpf(data, r->item) < 0)
		btree_search_item(r->left, data, cmpf);
	else if (cmpf(data, r->item) >= 0)
		btree_search_item(r->right, data, cmpf);
	return (NULL);
}
