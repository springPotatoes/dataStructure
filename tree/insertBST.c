typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btNode;

int insertBST(btNode** t, char x) {
	btNode* temp;
	if (*t == NULL) {
		temp = (btNode*)malloc(sizeof(btNode));
		temp->data = x; 
		temp->left = temp->right = NULL;
		*t = temp;
		return 1;
	}
	if (x == (*t)->data) return 0;
	if (x < (*t)->data) return(insertBST(&((*t)->left), x));
}