#include <stdio.h>

typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btNode;

int main(void) {
	return 0;
}

//Check the equality of a binary tree
int isEquals(struct btNode* t1, struct btNode* t2) {
	if (t1 == NULL && t2 == NULL) return 1;
	if (t1 != NULL && t2 != NULL) {
		if (t1->data != t2->data) return 0;
		if (isEquals(t1->left) && isEquals(t1->right, t2->right))
			return 1;
	}
	return 0;
}

//Copy Functions for Binary Trees
btNode* copyBT(btNode *t) {
	btNode* temp;
	if (t != NULL) {
		temp = (btNode*)malloc(sizeof(btNode));
		temp->data = t->data;
		temp->left = copyBT(t->left);
		temp->right = copyBT(t->right);
		return temp;
	}
	return NULL;
}