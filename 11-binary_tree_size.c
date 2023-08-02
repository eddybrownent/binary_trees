#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of the binary tree
 * @tree: pointer to the root node of the tree to be measured size
 *
 * Return: If tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);

		return (1 + left_size + right_size);
	}
}
