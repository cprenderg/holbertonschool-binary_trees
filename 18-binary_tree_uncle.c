#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node to find uncle of
 *
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *grandad;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	grandad = node->parent->parent;
	if (grandad == NULL)
	{
		return (NULL);
	}
	if (grandad->left == node->parent)
	{
		uncle = grandad->right;
	}
	else
	{
		uncle = grandad->left;
	}
	if (uncle == NULL)
	{
		return (NULL);
	}
	return (uncle);
}
