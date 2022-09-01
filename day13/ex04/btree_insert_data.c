/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:02:35 by druina            #+#    #+#             */
/*   Updated: 2022/08/25 20:55:03 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return ;
	if (*root == NULL)
		root = btree_create_node(item);
	if (cmpf(item, root->item) < 0)
		btree_insert_data(root->left, item, cmpf);
	else
		btree_insert_data(root->right, item, cmpf);
}
