#include <stdio.h>
#include <Windows.h>
#include <functional>
#include <time.h>

typedef void (*PFunc)(int*);

void callback1(int* s)
{
	printf("%d�b��Ɏ��s������\n", *s);
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
			return printf("���Ȃ��̗\�z : ����\n");
		}
		else
		{
			return printf("���Ȃ��̗\�z : �\n");
		}
	};

	auto Result = [](int x, int y)//x...�\�z ,y...�T�C�R���̖�
	{
		if((x % 2) == 0)
		{
			if((y % 2) == 0)
			{
				return printf("����\n");
			}
			else
			{
				return printf("�s����\n");
			}
		}
		else if ((x % 2) == 1)
		{
			if ((y % 2) == 1)
			{
				return printf("����\n");
			}
			else
			{
				return printf("�s����\n");
			}
		}
	};
	

	printf("strat\n");
	printf("�T�C�R���̖ڂ�\�z\n���� = 0 � = 1�����\n");
	scanf_s("%d", &num);
	
	Forecasts(num);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	int a = dice();//�_�C�X�̌��ʂ�ۑ�
	printf("�T�C�R���̖�:%d\n", a);
	Result(num, a);

	return 0;
}









