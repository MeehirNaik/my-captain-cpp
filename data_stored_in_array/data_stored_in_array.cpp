#include<iostream>

int a[20],i,j,b;

int main()
{
	std::cout<<"Enter the number of values of array"<<std::endl;
	std::cin>>b;
	std::cout<<std::endl;
	std::cout<<"Enter the value to add to array"<<std::endl;
	for(i=0;i<b;i++)
	{
		std::cin>>a[i];
	}
	std::cout<<std::endl;
	std::cout<<"The entered values of array are"<<std::endl;
	for(j=0;j<b;j++)
	{
		std::cout<<a[j]<<std::endl;
	}
	
}
