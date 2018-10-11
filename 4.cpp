#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "");
	int x[10],i,maior,menor;
	for (i=0;i<10;i++)
	{
		cout<<"Números:"<<endl;
		cin>>x[i];
	}

	for (i=0;i<9;i++)
	{
		if (x[i]>x[i+1])
		{
			maior=x[i];
			menor=x[i+1];
		}
	}

	cout<<"Amplitude:"<<maior-menor<<endl;
}
