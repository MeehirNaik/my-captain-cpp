#include<iostream>
using namespace std;
long int multiplyNumbers(int n);
int fact;

int main()
{
	cout<<"enter the number of which factorial is needed"<<endl;
	cin>>fact;
	cout<<"the factorial of the entered no. is "<< multiplyNumbers(fact) <<endl;
}
long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
