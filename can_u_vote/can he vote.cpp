#include<iostream>
int vote(int);
int main()
{
	int age,temp;
	char first_name[50],last_name[50]={""};
		std::cout<<"Enter the first name "<<std::endl;
		std::cin>>first_name;
		std::cout<<"Enter the last name "<<std::endl;
		std::cin>>last_name;
		std::cout<<"Enter your age "<<std::endl;
		std::cin>>age;
		if(age<0)
		std::cout<<"Hello "<<first_name<<" "<<last_name<<" "<<"you enter a invalid age that is negative "<<age<<std::endl;
		else if(age==0)
		std::cout<<"Hello "<<first_name<<" "<<last_name<<" "<<"happy birth year you will requare more 18 years to vote ans your age is "<<age<<std::endl;
		else if(age>=18)
		std::cout<<"Hello "<<first_name<<" "<<last_name<<" "<<"you can vote as your a adult of age "<<age<<std::endl;
		else
		std::cout<<"Hello "<<first_name<<" "<<last_name<<" "<<"you can't vote as your age is less than 18 that is "<<age<<std::endl;
		
}
