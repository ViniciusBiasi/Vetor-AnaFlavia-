#include <iostream>
using namespace std;
int main ()
{
	int a[30],b[30],c[60],i,j,k;
	for (i=0;i<5;i++)
	{
		cout<<"Conjunto A:"<<endl;
		cin>>a[i];
	}
	
	for (i=0;i<5;i++)
	{
		cout<<"Conjunto B:"<<endl;
		cin>>b[i];
	}
	
	for (i=0,j=0,k=0;i<10;i++)
	{
		if (i%2==0){
			c[i]=a[j];
			j++;}
			else {
				c[i]=b[k];
				k++;}
	}
	
	cout<<endl;
	for (i=0;i<10;i++)
	{
		cout<<c[i]<<endl;
	}
}
