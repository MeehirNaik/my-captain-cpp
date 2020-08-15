#include<iostream>

int i=0,j=0,k=0,l=0;
float mean=0,median=0,n[100],a;

int main()
{
	std::cout<<"enter the numbers to add to array "<<std::endl<<std::endl<<"enter 99999 to finish entries"<<std::endl;
	while(n[i-1]!=99999){
		std::cin>>n[i];
		i++;	
	}
	std::cout<<i<<std::endl;
	for(j=0;j<=i-2;j++)  //mean
	{
		mean = mean + n[j];
	}
	mean = mean/(i-1);
	std::cout<<"the mean is "<<mean<<std::endl;
	for(k=0;k<=i-2;k++)  //median
	{
		for(l=k;l<=i-2;l++)
		{	
			if( n[k]>n[l] )
			{
				a = n[k];
				n[k] = n[l];
				n[l] = a;
			}
		}
	}
	if((i-1)%2==0)
	median=(n[(i-2)/2]+n[((i-2)/2)+1])/2;
	else
	median=n[((i-2)/2)+1];
	std::cout<<"the median is "<<median<<std::endl;
	return 0;
}
