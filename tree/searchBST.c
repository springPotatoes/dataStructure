
typedef struct btNode {
	int data;
	struct btNode* left;
	struct btNode* right;
}btNode;

//Search a binary traversal tree t for a node with the value key and return a pointer to that node
btNode* searchBST(btNode* t, char key) {
	if (t == NULL) //When t is a terminal node
		return NULL;	

	if (key == t->data) //When we find the data for key
		return t;

	if (key < t->data) //When the key value is less than the data
		return(searchBST(t->left, key)); //Traversal of a function through t's left child nodes

	return(searchBST(t->right, key));	//Traversal through right child nodes when value of key is greater than data
}