#include "binary_trees.h"
/**
 * binary_tree_balance_height - measure height of a binary tree
 * @tree: pointer to the root node of tree
 *
 * Return: height of tree
 */
int binary_tree_balance_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_height = binary_tree_balance_height(tree->left);
	right_height = binary_tree_balance_height(tree->right);
	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	return (right_height + 1);
}
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to root node
 *
 * Return: balance of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance;
	int right_balance;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_balance = binary_tree_balance_height(tree->left);
	right_balance = binary_tree_balance_height(tree->right);
	return (left_balance - right_balance);
}
