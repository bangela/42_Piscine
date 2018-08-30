/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bangela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 21:32:28 by bangela           #+#    #+#             */
/*   Updated: 2018/08/24 21:39:05 by bangela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int h_left;
	int	h_right;

	if (root == NULL)
		return (0);
	h_left = btree_level_count(root->left);
	h_right = btree_level_count(root->right);
	if (h_left > h_right)
		return (1 + h_left);
	else
		return (1 + h_right);
}
