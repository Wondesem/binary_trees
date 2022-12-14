# include "binary_trees.h"
/**
 * binary_tree_t - creates a binary tree
 * @parent: pointer to parent
 * @value: value to be placed in newnode
 * Return: pointer to the new node or NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
