#include"stdafx.h"
#include"function.h"

int main()
{
	int s;
	std::cout<<"������һ��������(����������ĸ�뿪)��"<<std::endl;
	while(std::cin>>s)
	{
		std::cout<<s<<"! = "<<fact(s)<<std::endl;
		std::cout<<"������һ��������(����������ĸ�뿪)��"<<std::endl;
	}
	std::cout<<"Bye!"<<std::endl;
	system("pause");
	return 0;
}