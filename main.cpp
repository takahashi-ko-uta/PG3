#include <stdio.h>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

void* malloc(size_t size);

typedef struct cell{
	char str[8];
	struct cell* next;
}CELL;

void create(CELL* endCell, const char* buf);
void index(CELL* endCell);

int main()
{	
	char str[8];
	CELL head;
	head.next = nullptr;
	
	while (true){
		printf("追加する値を入力:");
		scanf_s("%s", str, 8);

		//手順3
		create(&head, str);

		//手順４
		index(&head);

	}
	
	return 0;
}
	

void create(CELL *endCell, const char *buf) {
	CELL* newCell;
	//新規作成するセル分のメモリを確保する
	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 8, buf);
	//newCell->str = buf;
	newCell->next = nullptr;

	while (endCell->next != nullptr) {
		endCell = endCell->next;
	}

}

void index(CELL *endCell) {
	while (endCell->next != nullptr ){
		endCell = endCell->next;

		printf("%s\n", endCell->str);
	}
	printf("-------------------------------\n");
}










