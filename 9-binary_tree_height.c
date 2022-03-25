#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_L, height_R;

	if (tree == NULL)
		return (0);

	height_L = binary_tree_height(tree->left);
	height_R = binary_tree_height(tree->right);
	if (height_L >= height_R)
		return (height_L + 1);
	return (height_R + 1);
}
