#include<iostream>

int a=0,b=0,m=0;

int main()
{
	std::cout<<"Enter the value of A and B to ADD "<<std::endl;
	std::cin>>a>>b;
	std::cout<<"enter the value of modulo "<<std::endl;
	std::cin>>m;
	std::cout<<"The ans to this is "<<((a+b)%m)<<std::endl;
}
