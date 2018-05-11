#include"stdafx.h"
#include"function.h"

int main()
{
	int s;
	std::cout<<"请输入一个正整数(输入任意字母离开)："<<std::endl;
	while(std::cin>>s)
	{
		std::cout<<s<<"! = "<<fact(s)<<std::endl;
		std::cout<<"请输入一个正整数(输入任意字母离开)："<<std::endl;
	}
	std::cout<<"Bye!"<<std::endl;
	system("pause");
	return 0;
}