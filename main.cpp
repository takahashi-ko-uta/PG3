#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void callback1(int *s)
{
	printf("%d�b��Ɏ��s\n", *s);
}

void setTimeout(PFunc p,int second)
{
	Sleep(second * 1000);
	p(&second);
}


int main()
{
	srand(time(nullptr));
	int number = rand() % 6 + 1;//1�`6�̃����_���Ȑ����𐶐�
	int num;

	printf("strat\n");
	printf("�T�C�R���̖ڂ�\�z\n���� = 0 � = 1�����\n");
	scanf_s("%d", &num);
	if(num == 0)
	{
		printf("�\�z : ����\n");
	}
	else
	{
		printf("�\�z : �\n");
	}
	
	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	if((number%2) == 0)//����
	{
		printf("���� : ��\n");
	}
	else               //�
	{
		printf("���� : ��\n");
	}
	

	

	
	
	return (0);
}









