#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* if a node has no chilren then its full */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* if node has exactly two chilren check their subtrees */
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	/* If neither of above conditions ARE met, the tree is not full */
	return (0);
}
