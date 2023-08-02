#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: The tree to count the leaves from
 *
 * Return: 0 if tree is NULL
 *		number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left;
	size_t leaves_right;

	if (!tree)
	{
		return (0);
	}

	if (!tree->right && !tree->left)
	{
		return (1);
	}
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
}
