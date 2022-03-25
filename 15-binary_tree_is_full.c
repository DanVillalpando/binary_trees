#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */int binary_tree_is_full(const binary_tree_t *tree)
{
	int f1, f2;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	f1 = binary_tree_is_full(tree->left);
	f2 = binary_tree_is_full(tree->right);
	if (f1 == 0 || f2 == 0)
		return (0);
	return (1);
}

#include "binary_trees.h"
/***
 * checks if a node is a leaf returns 1 if leaf, 0 otherwise
 */int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
