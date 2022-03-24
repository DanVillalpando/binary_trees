#include "binary_trees.h"

/***
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 */size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	depth++;
	return (depth);

	if (tree == NULL)
		return (0);
}
