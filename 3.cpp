#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
  int i=0;
  int x;
  int a=0;
  int y[100];

  for (i=0;i<=100;i++)
  {
   cout << "Digite um valor numérico: "<<i+1<<endl;
   cin >> y[i];
  }
   cout << "Digite o valor que deseja procurar no vetor: "<<endl;
   cin >> x;

   for (i=0;i<=100;i++)
    {
     if (x==y[i])
      cout << "O valor foi encontrado: " <<y[i] <<endl;
     else
      a=a+1;
     }
    
    if (a>=99)
     cout << "\nO valor não foi encontrado.";

 }
