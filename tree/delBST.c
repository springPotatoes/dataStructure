#include <stdio.h>
typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btNode;

//Assume that the delete node is the left child of its parent node.

int main(void) {

	btNode* x, * p, * c, * temp;
	char imsi;

	//If delete node x is a leaf node
	if (x->left == NULL && x->right == NULL) {
		p->left = NULL;
	}

	//If delete node x has only right children
	else if (x->left == NULL && x->right != NULL) {
		temp = x;
		p->left = x->right;
	}

	//If delete node x has only left children
	else if (x->left != NULL && x->right == NULL) {
		temp = x;
		p->left = x->left;
	}

	//If delete node x has left and right children
	//delete them by replacing them with the immediate predecessor of delete node x.
	else {
		p = x;
		c = x->left;
		while (c->right != NULL) {
			p = c;
			c = c->right;
		}

		imsi = x->data;
		x->data = c->data;
		c->data = imsi;
		temp = c;

		if (c->left == NULL) {	//If c is a leaf node
			p->right = NULL;
		}
		else {	//If C has a left child node
			p->right = c->left;
		}
	}
	return temp;
}