/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druina <druina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:58:07 by druina            #+#    #+#             */
/*   Updated: 2022/08/25 15:15:26 by druina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void	*item)
{
	t_btree	*element;

	element = malloc(sizeof(t_btree));
	element->item = item;
	element->left = NULL;
	element->right = NULL;
	return (element);
}
