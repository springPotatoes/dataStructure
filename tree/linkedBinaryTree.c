#include <stdio.h>

typedef struct btNode {
	char data;
	struct btNode* left;
	struct btNode* right;
}Tree;

int main(void) {
	Tree* tree, * temp, * current;
	tree = NULL;

	//Add root node 'A'
	temp = (Tree *)malloc(sizeof(Tree));
	temp->data = 'A';
	temp->left = temp->right = NULL;
	tree = temp;

	//Add node 'B' as left child of current(=tree) node
	current = tree;
	temp = (Tree*)malloc(sizeof(Tree));
	temp->data = 'B';
	temp->left = temp->right = NULL;
	current->left = temp;
}