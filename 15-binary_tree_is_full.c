#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to node
 *
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_branch;
	int right_branch;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	left_branch = binary_tree_is_full(tree->left);
	right_branch = binary_tree_is_full(tree->right);
	if (left_branch == 1 && right_branch == 1)
	{
		return (1);
	}
	return (0);
}
