#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: returns a pointer to the created node otherwise NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (!parent)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (!right_child)
		return (NULL);

	right_child->n = value;
	right_child->left = NULL;
	right_child->right = NULL;

	if (parent->right)
	{
		right_child->right = parent->right;
		right_child->right->parent = right_child;
	}
	parent->right = right_child;

	return (right_child);
}
