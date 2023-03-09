#include "binary_trees.h"

/**
 * binary_tree_node - function that inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: if an eerror occurs - NULL.
 * 	otherwise - a pointer to the new node.
 * 	
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left =new;

	return (new):
}
