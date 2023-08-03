#include "binary_trees.h"
/**
 * height - checks height of a binary tree.
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: height otherwise 0.
 */
int height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);
	if (!(tree->left || tree->right))
		return (0);
	left_h = height(tree->left);
	right_h = height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if perfect otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h, perfect_l, perfect_r;

	if (!tree)
		return (0);

	if (tree && !tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	if (left_h == right_h)
	{
		perfect_l = binary_tree_is_perfect(tree->left);
		perfect_r = binary_tree_is_perfect(tree->right);
		if (perfect_l && perfect_r)
			return (1);
	}
	return (0);
}
