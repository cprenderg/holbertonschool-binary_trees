#include "binary_trees.h"
/**
 * binary_tree_node - creates a new binary node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in new node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
