#include <stdio.h>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

void* malloc(size_t size);

typedef struct cell{
	int val;
	struct cell* next;
}CELL;

void create(CELL* head, int x);
void index(CELL* head);

int main()
{	
	int val;
	CELL head;
	head.next = nullptr;
	
	while (true){
		printf("追加する値を入力:");
		scanf_s("%d", &val);

		//手順3
		create(&head, val);

		//手順４
		index(&head);

	}
	
	return 0;
}
	

void create(CELL* head, int x) {
	CELL* cell;
	//新規作成するセル分のメモリを確保する
	cell = (CELL*)malloc(sizeof(CELL));

	cell->val = x;
	cell->next = nullptr;
	//最後(最新)のセルのアドレスの1つ目の処理は引数から持ってきた
	//リストのうち最初のセルのアドレスが該当する
	while (head->next != nullptr){
		head = head->next;
	}
	head->next = cell;
}

void index(CELL* head) {
	while (head->next != nullptr){
		head = head->next;
		printf("%d\n", head->val);
	}
	printf("-------------------------------\n");
}










