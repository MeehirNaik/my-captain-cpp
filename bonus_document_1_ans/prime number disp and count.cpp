#include<iostream>

int i,count,n;

int main()
{
	std::cout<<"enter the no to test for prime(positive integer) "<<std::endl;
	std::cin>>n;
	if(n<=0){
		std::cout<<"the entered number "<<n<<" is negetive and not a prime number"<<std::endl;
		return 0;
	}
	if(n==1){
		std::cout<<"the entered number "<<n<<" is prime number"<<std::endl;
		return 0;
	}	
	else{
		for(i=1;i<=n;i++){
			if(n%i==0)
			count++;
		}
		if(count==2)
		std::cout<<"the entered number "<<n<<" is prime number"<<std::endl;
		else
		std::cout<<"the entered number "<<n<<" is not prime number"<<std::endl;		
	}
	return 0;
}
