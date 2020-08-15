#include<iostream>
using namespace std;

int a,b,n,i,ans=1;
float r;

int main()
{
	cout<<"enter the first two numbers of GP"<<endl;
	cin>>a>>b;
	r=b/a;
	cout<<"enter the term number to find in GP"<<endl;
	cin>>n;
	for(i=1;i<n;i++)
	ans = ans*r;
	cout<<"The nth term is "<<(a*ans)<<endl;
	return 0;
}
