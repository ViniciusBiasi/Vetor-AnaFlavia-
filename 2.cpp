#include <iostream>
#include <math.h>
#include <stdlib.h.>
using namespace std;
int main ()

{ 
int v[50]; 
int i; 
cout <<"\nElementos do vetor:\n\n"; 
for (i = 0; i < 50; i++) 
{ 
v[i] = rand() % 101; 
cout <<v[i]; 
cout <<" "<<endl; 
} 
cout << "Ordem aleatoria: "<<endl; 
for (i = 49; i >= 0; i--) 
{ cout << v[i]<<endl; 

} 

} 
				  

