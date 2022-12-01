#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

void* malloc(size_t size);

typedef struct cell{
	int val;
	struct cell* prev;
	struct cell* next;
}CELL;

void create(CELL* endCELL, int iterator);
void index(CELL* endCell);
CELL* getInsertListAddress(CELL* endCELL, int iterator);

int main()
{	
	int operate;
	int iterator;
	int inputValue;
	CELL* insertCell;

	CELL head;
	head.next = nullptr;

	while (true){
		printf("===操作説明===\n");
		printf("1:要素を表示\n");
		printf("2:要素を追加\n");
		printf("=============\n");

		printf("操作を入力してください:");
		scanf_s("%d", &operate);


		switch (operate)
		{
		case 1:
			index(&head);
			break;
		case 2:
			printf("何番目のセルの後ろに挿入しますか?\n");
			scanf_s("%d", &iterator);

			printf("挿入する値を入力してください\n");
			scanf_s("%d", &inputValue);

			insertCell = getInsertListAddress(&head, iterator);
			create(insertCell, inputValue);
			break;
		}
	}

	return 0;
}
	

CELL* getInsertListAddress(CELL* endCELL, int iterator) {
	for (int i = 0; i < iterator; i++) {
		if (endCELL->next) {
			endCELL = endCELL->next;
		}
		else {
			break;
		}
	}
	return endCELL;
}

void create(CELL *currentCell,int x) {
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	if (newCell != nullptr)
	{
		newCell->val = x;
		newCell->prev = currentCell;
		newCell->next = currentCell->next;
	}
	
	if (currentCell->next) {
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}
	currentCell->next = newCell;
}

void index(CELL* endCell) {
	int no = 1;
	while (endCell->next != nullptr){
		endCell = endCell->next;
		printf("%d:", no);
		printf("%d\n", endCell->val);
		no++;
	}
	printf("要素数:%d\n", no - 1);
}











