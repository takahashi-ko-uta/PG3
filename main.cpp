#include <stdio.h>
#include <Windows.h>
#include <functional>
#include <time.h>

typedef void (*PFunc)(int*);

void callback1(int* s)
{
	printf("%d秒後に実行されるよ\n", *s);
}

void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);
	p(&second);
}

int main(int argc,const char *argv[])
{
	int num;
	std::function<int()>dice = []()
	{
		srand(time(nullptr));
		int x = rand() % 6 + 1;
		return x;
	};

	auto result = [](int y)
	{
		if(y % 2== 0)
		{
			return printf("あなたの予想 : 偶数\n");
		}
		else
		{
			return printf("あなたの予想 : 奇数\n");
		}
	};
	

	printf("strat\n");
	printf("サイコロの目を予想\n偶数 = 0 奇数 = 1を入力\n");
	scanf_s("%d", &num);
	
	result(num);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	printf("サイコロの目:%d\n", dice());
	return 0;
}









