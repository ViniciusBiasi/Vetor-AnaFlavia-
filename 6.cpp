#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float n[100],s,m,c,v;
	int i;
	s=0;
	for (i=0;i<4;i++)
	{
		cout<<"Números:"<<endl;
		cin>>n[i];
		s=s+n[i];
	}
	m=s/i;
	
	s=0;
	for (i=0;i<4;i++)
	{
		if (n>0){
			c=pow ((n[i]-m),2);}
		else {
			c=(pow ((n[i]-m),2))*-1;}
			
		s=s+c;
	}
	m=s/i;
	v = sqrt(m);
	cout<<"Desvio médio:"<<v<<endl;
}
