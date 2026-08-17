#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: node to measure down from
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	return (left_height + right_height + 1);
}
