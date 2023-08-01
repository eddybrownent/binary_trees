#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as
 *				the left-child of another node
 * @value: the value to store in the new node
 * @parent: Pointer to the node to insert the left_child in
 *
 * Return: pointer to the created node, or NULL on failure of if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node;

	if (!parent)
	{
		return (NULL);
	}

	New_node = malloc(sizeof(binary_tree_t));
	if (!New_node)
	{
		return (NULL);
	}

	New_node->n = value;
	New_node->parent = parent;
	New_node->right = NULL;
	New_node->left = parent->left;
	parent->left = New_node;
	if (New_node->left)
	{
		New_node->left->parent = New_node;
	}
	return (New_node);
}
