#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));
	else if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_nodes(tree->left));
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

#include "binary_trees.h"

/***
 * checks if a node is a leaf returns 1 if leaf, cero otherwise
 */int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
