#include <stdio.h>
#define N 50

typedef struct btNode1 {
	char data;
}ArrTree;

int main(void) {
	ArrTree bt[N];
	int tree = -1;	//Create a binary tree that is a union
	int i = 0;

	//Initialize array bt[ ] and create a union binary tree
	for (int i = 0; i < N; i++) {
		bt[i].data = '-';
	}

	//Add Root Element 'A'
	tree = 0;
	bt[tree].data = 'A';
	//...

	i = 3;
	bt[2 * i + 1].data = 'B';		//Add node 'B' as left child of node i = 3
	bt[2 * i + 2].data = 'C';		//Add node 'C' as right child of node i = 3
}