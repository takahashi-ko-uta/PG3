#include <stdio.h>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main()
{	
	printf("==1970==\n");
	std::list<string>lst = {
	"oosaki","gotannda","meguro","ebisu","sibuya","harazyuku",
	"yoyogi","sinnzyuku","sinnookubo","takadanobaba","meziro",
	"ikebukuro","ootuka","sugamo","komagome","tabata",
	"nippori","uguisudani","ueno","okatimati","akihabara","kannda",
	"toukyou","yuurakutyou","sinnbasi","hamamatutyou","tamata","sinagawa"
	};
	
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	printf("==2019==\n");

	for(std::list<string>::iterator itr = lst.begin();itr != lst.end();++itr){	//西日暮里を追加
		if(*itr == "nippori")
		{
			itr = lst.insert(itr, "nisinippori");
			++itr;
		}
	}

	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	printf("==2022==\n");

	for (std::list<string>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {	//ゲートウェイを追加
		if (*itr == "sinagawa")
		{
			itr = lst.insert(itr, "takanawage-toway");
			++itr;
		}
	}

	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	system("pause");
	return 0;
}
	











