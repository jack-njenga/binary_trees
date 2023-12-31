#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node to check
 *
 * Return: 1 if the node is root othwerwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
