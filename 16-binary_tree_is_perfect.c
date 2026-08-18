#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_perfect_height - measure height of a binary tree
 * @tree: pointer to the root node of tree
 *
 * Return: height of tree
 */
size_t binary_tree_perfect_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_height = binary_tree_perfect_height(tree->left);
	right_height = binary_tree_perfect_height(tree->right);
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	return (right_height + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer node of tree to check
 *
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int left_perfect;
	int right_perfect;

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
	left_height = binary_tree_perfect_height(tree->left);
	right_height = binary_tree_perfect_height(tree->right);
	if (left_height != right_height)
	{
		return (0);
	}
	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);
	if (left_perfect && right_perfect)
	{
		return(1);
	}
	return (0);
}

