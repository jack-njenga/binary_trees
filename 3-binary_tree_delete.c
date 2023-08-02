#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire bnary tree.
 * @tree: the binary tree to delete.
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* postorder trasversal left - right - parent */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
