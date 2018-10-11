#include <iostream>
using namespace std;
int main ()
{
	int a[5],b[5],c[10],d[10],i,x,j,y,k;
	
	for (i=0;i<5;i++)
	{
		cout<<"Termo "<<i+1<<" do conjunto a:"<<endl;
		cin>>a[i];
	}
	cout<<endl;
	for (i=0;i<5;i++)
	{
		cout<<"Termo "<<i+1<<" do conjunto b:"<<endl;
		cin>>b[i];
	}
	cout<<endl;
	cout<<"Digite 0 para parar."<<endl;
	cout<<"Digite 1 para: a u b "<<endl;
	cout<<"Digite 2 para: a n b"<<endl;
	cin>>x;
	while (x!=0)
	{
		if (x==1)
		{
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
		
		if (x==2)
		{
			for (i=0;i<5;i++)
			{
				for (j=0;j<5;j++)
				{
					if (a[i]==b[j]){
						cout<<a[i]<<endl;
						break;}
				}
			}
		}
	
	cout<<"Digite 0 para parar."<<endl;
	cout<<"Digite 1 para: a u b "<<endl;
	cout<<"Digite 2 para: a n b"<<endl;
	cin>>x;
	}
}
	
