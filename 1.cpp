#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int nota[10], soma,x,media,i;
    
    for (i=0;i<10;i++)
     {
         cout << "Digite a nota da disciplina do aluno: "<<endl;
         cin >> nota[i];
    
      soma = soma + nota[i];
             }
             media = soma / i;
             for (i=0;i<10;i++)
             {
                 if (nota[i] > media) {
                 x++;
                                  
                 }
                
             }
                          
             cout << "O numero de alunos que tiveram notas superior à média da turma "<< media << endl;
                         
}
