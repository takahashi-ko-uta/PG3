#include <stdio.h>

int Recursive(int n,int x)
{
	
	if(n <= 1)
	{
		return x;
	}

	x = x * 2 - 50;

	return(Recursive(n - 1,x));
}



int main()
{
	int n = 5;
	int x = 100;
	int result;

	result = Recursive(n,x);
	printf("%d時間目の時給は = %d円です\n", n, result);
	
	return (0);
}









