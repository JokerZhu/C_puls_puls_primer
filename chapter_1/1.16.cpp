#include <iostream>
int main()
{
	int no = 0;
	int sum = 0;
	while(std::cin>>no )
		sum+=no;
	std::cout<< "sum = "<< sum<<std::endl;
	return 0;
}
