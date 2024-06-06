#include "binary_trees.h"

/**
 * depth - Measures the depth of a node in a binary tree
 * @node: Pointer to the node to measure the depth
 *
 * Return: Depth of the node
 */
size_t depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node->parent)
	{
		node = node->parent;
		depth++;
	}

	return (depth);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 *         or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = depth(first);
	depth_second = depth(second);

	/* Move up in the tree to the same level */
	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	/* Find the common ancestor */
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

