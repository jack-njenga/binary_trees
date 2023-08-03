#include "binary_trees.h"
/**
 * height - Finds the height of the tree.
 * @tree: binary tree to use
 *
 * Return: height otherise 0.
 */
int height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!(tree))
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to
 * measure the balance factor.
 *
 * Return: the balance factor otherise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int factor;

	if (!tree)
		return (0);

	factor = height(tree->left) - height(tree->right);

	return (factor);
}
