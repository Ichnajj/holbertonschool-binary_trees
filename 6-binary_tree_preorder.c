#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree in preorder.
 * @tree: A pointer to the root node of the binary tree.
 * @func: A pointer to a function to be called for each node's value.
 * This function traverses a binary tree in preorder (root, left, right),
 * applying the function `func` to the value
 * of each node (tree->n) as it visits.
 * The traversal proceeds as follows:
 * 1. Visit the current node (apply `func` to tree->n).
 * 2. Recursively traverse the left subtree.
 * 3. Recursively traverse the right subtree.
 * If either the tree or func is NULL, the function does nothing.
 */


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
