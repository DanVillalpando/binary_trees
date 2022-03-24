#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->parent) == NULL)
		return (1);
	return (0);
}
