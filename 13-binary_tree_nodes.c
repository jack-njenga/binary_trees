#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);

	if (!(tree->left || tree->right))
		return (0);

	nodes = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes + 1);
}