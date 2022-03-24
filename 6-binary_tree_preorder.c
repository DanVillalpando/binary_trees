#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}

	if (tree == NULL || func == NULL)
		return;
}
