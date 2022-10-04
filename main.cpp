#include <stdio.h>

template<typename Type>
Type add(Type a,Type b){
	return static_cast<Type>(a + b);
}
template<typename Type>
Type min(Type a, Type b) {
	if(a < b)
	{
		return static_cast<Type>(a);
	}
	else if(a > b)
	{
		return static_cast<Type>(b);
	}
}
template<>
char min<char>(char a,char b)
{
	return printf("”šˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ");
}

int main(){
	printf("%d\n", min<int>(114, 514));
	printf("%f\n", min<float>(11.4f, 51.4f));
	printf("%f\n", min<double>(11.4f, 51.4f));
	printf("%c\n", min<char>(11.4f, 51.4f));
	return 0;
}









