#include <stdlib.h>

/**
 * binary_tree_preorder - Performs a pre-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree) {
        func(tree->n);  // Visit the root node
        binary_tree_preorder(tree->left, func);  // Traverse left subtree
        binary_tree_preorder(tree->right, func); // Traverse right subtree
    }
}

