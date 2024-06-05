#include <stdlib.h>

/**
 * binary_tree_preorder - Embarks on a pre-order expedition
 * @tree: The noble root node
 * @func: The function to be summoned at each node
 *
 * Return: Void, for the journey's purpose is exploration, not conquest
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

