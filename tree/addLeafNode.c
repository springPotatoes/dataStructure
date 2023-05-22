#include <stdio.h>

typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btTree;

int main(void) {
	btTree* current, * temp, *deleted;
	char x;
	
	//Add a leaf node (to the left child of a node)
	temp = (btTree*)malloc(sizeof(btTree));
	temp->data = x;
	temp->left = temp->right = NULL;
	current->left = temp;

	//Delete LeafNode (deletes a node's left child)
	deleted = current->left;
	current->left = NULL;
	free(deleted);
}