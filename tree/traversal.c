#include <stdio.h>

typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btTree;

int main(void) {
	return 0;
}


// Preorder traversal functions
void preorderTraversal(struct btNode* t) {
	if (t == NULL) return 0;
	printf("%c  ", t->data);
	preorderTraversal(t->left);
	preorderTraversal(t->right);
}

// Indoder traversal functions
void indoderTraversal(struct btNode* t) {
	if (t == NULL) return;
	inorderTraversal(t->left);
	printf("%c  ", t->data);
	inorderTraersal(t->right);
}

// Postorder traversal functions
void postorderTraversal(struct btNode* t) {
	if (t == NULL) return;	
	postorderTraversal(t->left);
	postorderTraversal(t->right);
	printf("%c  ", t->data);
}