#include<iostream>
#include <math.h>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    int n[50] ,v[50];
    int d,i,limite;
    int verifica; 


    verifica=1;

    for(i=1; i<50 ;i++)
    { 
	d = 2;
    verifica = 1;
        if (n[i] > 1) { 
           
            limite = sqrt(n[i]); 
            while(verifica && d <= limite) 
             {
               
                if (n[i] % d  == 0){ 
                    
                    verifica = 0;
                }
                
                d++;
             } 
        
            if (verifica) 
            
            
            
                cout << "O número é primo. " <<n[i] <<endl;
                cout << "Vetor I: "<< n[i] <<endl;
                cout << "Vetor II "<< n[i] <<endl;
                
        }
    }
    return 0;   
}
