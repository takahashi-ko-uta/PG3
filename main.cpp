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
		printf("’Ç‰Á‚·‚é’l‚ð“ü—Í:");
		scanf_s("%s", str, 8);

		//Žè‡3
		create(&head, str);

		//Žè‡‚S
		index(&head);

	}
	
	return 0;
}
	

void create(CELL *endCell, const char *buf) {
	CELL* newCell;
	//V‹Kì¬‚·‚éƒZƒ‹•ª‚Ìƒƒ‚ƒŠ‚ðŠm•Û‚·‚é
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










