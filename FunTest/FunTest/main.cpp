#include"stdafx.h"
#include"function.h"

int main()
{
	int s;
	std::cout<<"请输入一个正整数："<<std::endl;
	std::cin>>s;
	std::cout<<s<<"! = "<<fact(s)<<std::endl;
	system("pause");
	return 0;
}