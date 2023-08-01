#include "binary_trees.h"

/**
 * binary_tree_node - Function to create binary tree node
 * @value: The value to put in the new node
 * @parent: Pointer to the parent node of the node to create
 * Return: returns a pointer to the new node or NULL if no
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_node;


	New_node = malloc(sizeof(binary_tree_t));

	if (New_node == NULL)
	{
		return (NULL);
	}

	New_node->n = value;
	New_node->parent = parent;
	New_node->left = NULL;
	New_node->right = NULL;

	return (New_node);
}
