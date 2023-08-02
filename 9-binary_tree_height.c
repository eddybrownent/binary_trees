#include "binary_trees.h"

/**
 * binbary_tree_height - function that measures the height of a binary tree
 * @tree: tree to be measured the height
 *
 * Return: The height of the tree
 *		0 if the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_h = 0;
		size_t right_h = 0;

		if (tree->right)
			right_h = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left_h = 1 + binary_tree_height(tree->right);
		if (left_h > right_h)
			return (left_h);
		else
			return (right_h);
	}
	else
		return (0);
}
