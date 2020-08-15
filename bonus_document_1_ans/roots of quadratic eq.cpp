#include<iostream>
#include <cmath> 
using namespace std;
float a,b,c,first;

int main()
{
	cout<<"a*X^2 + b*X + c\nenter the values of a,b and c"<<endl;
	cin>>a>>b>>c;
	first = -b/(2*a);
	if(b*b == 4*a*c){
		
		cout<<"the two root is "<<" ' "<< first << " ' ";
	}
	if(b*b > 4*a*c){

		cout<<"the two roots are "<<" ' "<< 
		(first + ((sqrt(b*b - 4*a*c)) / (2*a)))
		<<" ' "<< " and "<<" ' "<<  
		(first - ((sqrt(b*b - 4*a*c)) / (2*a)))
		<<" ' "<<endl;
	}
	
	if(b*b < 4*a*c){
		
		cout<<"the two roots are "<<" ' "<< 
		first <<" + " << (sqrt(4*a*c - b*b)) / (2*a)<< "i" 
		<<" ' "<< " and "<<" ' "<< 
		first <<" - " << (sqrt(4*a*c - b*b)) / (2*a)<< "i"
		<<" ' "<<endl;
	}
	return 0;
}
