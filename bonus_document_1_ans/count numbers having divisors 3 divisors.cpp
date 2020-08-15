#include<iostream>

int i,j,count1,count2=0,n;

int main()
{
	std::cout<<"enter the number to test for 3 divisors(positive integer) "<<std::endl;
	std::cin>>n;
	std::cout<<std::endl;
	if(n<=0){
		std::cout<<"the entered number "<<n<<" is negetive number"<<std::endl;
		return 0;
	}
	for(i=1;i<=n;i++){ // the i is the numbers to test for divisors
		count1=0;
		for(j=1;j<=i;j++){  // thsi for loop finds the number of divisors
			if(i%j==0)
			count1++;  // counts the divisors of a number i
		}
		if(count1==3)
		{
			count2++; // if number has 3 divisors then they are counted here
			std::cout<<i<<std::endl;
		}
	}
	if(count2==0)
	std::cout<<"the entered number "<<n<<" has 0 number having 3 divisors"<<std::endl;
	else
	std::cout<<"the entered number "<<n<<" has "<<count2<<" numbers having three(3) divisors"<<std::endl;
	return 0;	
}
