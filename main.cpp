#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void callback1(int *s)
{
	printf("%d秒後に実行\n", *s);
}

void setTimeout(PFunc p,int second)
{
	Sleep(second * 1000);
	p(&second);
}


int main()
{
	srand(time(nullptr));
	int number = rand() % 6 + 1;//1～6のランダムな数字を生成
	int num;

	printf("strat\n");
	printf("サイコロの目を予想\n偶数 = 0 奇数 = 1を入力\n");
	scanf_s("%d", &num);
	if(num == 0)
	{
		printf("予想 : 偶数\n");
	}
	else
	{
		printf("予想 : 奇数\n");
	}
	
	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	if((number%2) == 0)//偶数
	{
		printf("正解 : 丁\n");
	}
	else               //奇数
	{
		printf("正解 : 半\n");
	}
	

	

	
	
	return (0);
}









