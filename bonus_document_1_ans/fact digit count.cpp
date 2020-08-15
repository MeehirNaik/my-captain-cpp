#include<iostream>
#include<conio.h>
using namespace std;
int fac,ans=1,count=1,i;

int main()
{
	cout<<"enter the number of which factorial is needed"<<endl;
	cin>>fac;
	for(i=1;i<=fac;i++){
		ans = ans*i;
	}
	cout<<"the factorial of entered number is "<<ans<<endl;
	while(ans>=10)
	{
		count++;
		ans=(ans-(ans%10));
		ans=ans/10;
	} 
	cout<<endl<<"And number of digits in its factorial are "<<count<<endl;
	return 0;
}

