
#include "ft_btree.h"
#include <unistd.h>
#include <stdio.h>
t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void ft_putchar(void *str)
{
    printf("%s",str );
}



int main(void)
{

t_btree    *node;
    t_btree *node1;
    t_btree *node2;
    t_btree *node3;
    t_btree *node4;
    t_btree *node5;
    t_btree *node6;
    node = btree_create_node("A");
    node1 = btree_create_node("B");
    node2 = btree_create_node("C");
    node3 = btree_create_node("D");
    node4 = btree_create_node("E");
    node5 = btree_create_node("F");
    node6 = btree_create_node("G");
    node->left = node1;
    node->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node5;
    node2->right= node6;

    btree_apply_prefix(node, ft_putchar );

    return(0);
}