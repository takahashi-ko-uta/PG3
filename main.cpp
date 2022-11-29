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
		printf("�ǉ�����l�����:");
		scanf_s("%d", &val);

		//�菇3
		create(&head, val);

		//�菇�S
		index(&head);

	}
	
	return 0;
}
	

void create(CELL* head, int x) {
	CELL* cell;
	//�V�K�쐬����Z�����̃��������m�ۂ���
	cell = (CELL*)malloc(sizeof(CELL));

	cell->val = x;
	cell->next = nullptr;
	//�Ō�(�ŐV)�̃Z���̃A�h���X��1�ڂ̏����͈������玝���Ă���
	//���X�g�̂����ŏ��̃Z���̃A�h���X���Y������
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










