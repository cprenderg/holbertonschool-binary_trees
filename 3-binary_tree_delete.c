#include "binary_trees.h"
static void binary_tree_delete_left(binary_tree_t *tree);
static void binary_tree_delete_right(binary_tree_t *tree);
/**
 * binary_tree_delete_left - deletes the left side of a binary tree
 * @tree: root node of tree
 *
 * Return: void
 */
static void binary_tree_delete_left(binary_tree_t *tree)
{
	if (tree->left == NULL)
        {
                return;
        }
	if (tree->left->right)
	{
		binary_tree_delete_right(tree->left);
	}    
        binary_tree_delete_left(tree->left);
        free(tree->left);
}
/**
 * binary_tree_delete_right - deletes the right side of a binary tree
 * @tree: root node of tree
 *
 * Return: void
 */
static void binary_tree_delete_right(binary_tree_t *tree)
{
	if (tree->right == NULL)
	{
		return;
	}
	if (tree->right->left)
	{
		binary_tree_delete_left(tree->right);
	}
	binary_tree_delete_right(tree->right);
	free(tree->right);
}
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: root node of tree
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->right != NULL)
	{
		binary_tree_delete_right(tree);
	}
	if (tree->left != NULL)
	{
		binary_tree_delete_left(tree);
	}
	free(tree);
}
