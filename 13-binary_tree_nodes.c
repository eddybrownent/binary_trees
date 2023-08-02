#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 *			with at least 1 child in a binary tree
 * @tree: The pointer to the root node of the tree
 *		to count the number of nodes from
 *
 * Return: If tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);

		return (1 + left_nodes + right_nodes);
	}
	else
	{
		return (0);
	}
}
