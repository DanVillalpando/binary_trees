#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
