/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:36:00 by bangela           #+#    #+#             */
/*   Updated: 2018/08/24 21:01:57 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *newnode;

	newnode = malloc(sizeof(t_btree));
	newnode->item = item;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
