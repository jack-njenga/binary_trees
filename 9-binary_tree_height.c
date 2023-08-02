#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of thr tree.
 *
 * Return: returns the height of the tree otherise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h, h;

	if (!(tree))
		return (0);
	if (!(tree->left || tree->right))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		h = left_h + 1;
	else
		h = right_h + 1;
	return (h);
}
