#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0. 0 is also returned if node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)  // Check if the node is NULL
        return (0);

    return (!node->left && !node->right);  // Check if both left and right children are NULL
}

