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

	auto Forecasts = [](int y)
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

	auto Result = [](int x, int y)//x...予想 ,y...サイコロの目
	{
		if((x % 2) == 0)
		{
			if((y % 2) == 0)
			{
				return printf("正解\n");
			}
			else
			{
				return printf("不正解\n");
			}
		}
		else if ((x % 2) == 1)
		{
			if ((y % 2) == 1)
			{
				return printf("正解\n");
			}
			else
			{
				return printf("不正解\n");
			}
		}
	};
	

	printf("strat\n");
	printf("サイコロの目を予想\n偶数 = 0 奇数 = 1を入力\n");
	scanf_s("%d", &num);
	
	Forecasts(num);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	int a = dice();//ダイスの結果を保存
	printf("サイコロの目:%d\n", a);
	Result(num, a);

	return 0;
}









