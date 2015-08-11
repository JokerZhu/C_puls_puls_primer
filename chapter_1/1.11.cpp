#include <iostream>

int main()
{
	int no1 = 0;
	int no2 = 0;
	std::cout<< "请输入两个整数:"<<std::endl;
	while(std::cin>>no1>>no2)
	{

		while(no1 > no2){
			std::cout<< no2 << std::endl;
			++no2;
		}
		while(no1 <= no2){
			std::cout<< no1 << std::endl;
			++no1;
		}
		return 0;
	}
		std::cout<< "输入错误"<<std::endl;
	
	return 0;

}
