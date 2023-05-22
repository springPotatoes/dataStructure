#include <stdio.h>

typedef struct btNode {
	char data;
	struct btNode* left;
	struct btNode* right;
}Tree;

int main(void) {
	Tree* tree, * temp, * current;
	tree = NULL;

	//루트노드 'A' 추가
	temp = (Tree *)malloc(sizeof(Tree));
	temp->data = 'A';
	temp->left = temp->right = NULL;
	tree = temp;

	//current(=tree) 노드의 왼쪽 자식으로 노드 'B'추가
	current = tree;
	temp = (Tree*)malloc(sizeof(Tree));
	temp->data = 'B';
	temp->left = temp->right = NULL;
	current->left = temp;
}