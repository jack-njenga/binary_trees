#include "main.h"

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

int main(void)
{
	binary_tree_t *root;

    	root = binary_tree_node(NULL, 98);

    	root->left = binary_tree_node(root, 12);
    	root->left->left = binary_tree_node(root->left, 6);
    	root->left->right = binary_tree_node(root->left, 16);

    	root->right = binary_tree_node(root, 402);
    	root->right->left = binary_tree_node(root->right, 256);
    	root->right->right = binary_tree_node(root->right, 512);

    	binary_tree_print(root);
	
	
	return 0;
}

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	if (parent == NULL)
	{
		
	}

}