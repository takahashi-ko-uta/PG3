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

	auto result = [](int y)
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
	

	printf("strat\n");
	printf("�T�C�R���̖ڂ�\�z\n���� = 0 � = 1�����\n");
	scanf_s("%d", &num);
	
	result(num);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	printf("�T�C�R���̖�:%d\n", dice());
	return 0;
}









