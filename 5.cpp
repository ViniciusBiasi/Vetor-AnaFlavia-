#include <iostream>
using namespace std;
int main ()
{
	float m,s,n[100];
	int i;
	s=0;
	for (i=0;i<100;i++)
	{
		cout<<"Números:"<<endl;
		cin>>n[i];
		s=s+n[i];
	}
	cout<<endl;
	cout<<"Média:"<<s/i<<endl;
}
