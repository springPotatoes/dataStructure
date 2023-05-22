#include <stdio.h>

typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btTree;

int main(void) {
	btTree* current, * temp, *deleted;
	char x;
	
	//리프노드 추가 (노드의 왼쪽 자식노드에 추가)
	temp = (btTree*)malloc(sizeof(btTree));
	temp->data = x;
	temp->left = temp->right = NULL;
	current->left = temp;

	//리프노드 삭제 (노드의 왼쪽 자식노드를 삭제)
	deleted = current->left;
	current->left = NULL;
	free(deleted);
}