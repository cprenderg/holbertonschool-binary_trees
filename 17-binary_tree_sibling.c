#include "binary_trees.h"
/**
 * binary_tree_sibling - finds a sibling of a node
 * @node: pointer to node to find sibling of
 *
 * Return: pointer to sibling of tree
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		sibling = node->parent->right;
	}
	else
	{
		sibling = node->parent->left;
	}
	if (sibling == NULL)
	{
		return (NULL);
	}
	return (sibling);
}
