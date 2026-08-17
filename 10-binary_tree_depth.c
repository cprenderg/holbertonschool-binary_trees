#include "binary_trees.h"
/**
 * binary_tree_depth - measure depth of a node
 * @tree: pointer to node to measure depth
 *
 * Return: Depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
