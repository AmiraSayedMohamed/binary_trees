#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a left child to a given parent node
 * @parent: Pointer to the parent node
 * @value: Value to assign to the new left child
 *
 * Return: Pointer to the newly created node, or NULL if allocation fails or parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    // Check if parent is NULL
    if (parent == NULL)
        return NULL;

    // Allocate memory for the new node
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;

    // Initialize the new node with the given value
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    // If parent already has a left child, reassign it to the new node's left
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    // Set the new node as the left child of the parent
    parent->left = new_node;

    return new_node;
}

