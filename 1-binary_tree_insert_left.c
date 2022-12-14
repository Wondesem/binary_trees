# include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts new nodes at left
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: if left node exists the new node takes its place and
 *         the old node should be left node of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
