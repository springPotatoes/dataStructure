#include <stdio.h>
#define N 50

typedef struct btNode1 {
	char data;
}ArrTree;

int main(void) {
	ArrTree bt[N];
	int tree = -1;	//공집합인 이진트리 tree 생성
	int i = 0;

	//배열 bt[ ] 초기화 및 공집합 이진트리 생성
	for (int i = 0; i < N; i++) {
		bt[i].data = '-';
	}

	//루트원소 'A' 추가
	tree = 0;
	bt[tree].data = 'A';
	//...

	i = 3;
	bt[2 * i + 1].data = 'B';		//i = 3번 노드의 왼쪽 자식으로 노드 'B' 추가
	bt[2 * i + 2].data = 'C';		//i = 3번 노드의 오른쪽 자식으로 노드 'C' 추가
}