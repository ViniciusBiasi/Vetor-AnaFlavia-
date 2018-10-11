#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int i;
	float s,n[100];
	s=0;
	for (i=0;i<2;i++)
	{
		cout<<"Números:"<<endl;
		cin>>n[i];
		s=s+(pow (n[i],2));
	}
	s=s/i;
	s=pow (s,1.0/2.0);
	
	cout<<endl<<"Raiz média quadrática:"<<s<<endl;
}
