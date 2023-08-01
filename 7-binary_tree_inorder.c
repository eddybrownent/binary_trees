#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 *			using in-order traversal
 * @func: Pointer to a function to call for each node
 * @tree: tree to be traversed
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

