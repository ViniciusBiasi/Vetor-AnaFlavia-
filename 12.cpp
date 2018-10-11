#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

    float salario_minimo = 0;
    float folha_mensal = 0;
    int vetSalarios[100],s ;
    float maior_salario = 0;
    float media = 0;
    int p;
    int numero_total_pecas = 0;
    int  vetNumPecas[100] ;
    int total_homens_a = 0;
    int total_homens_b = 0;
    int total_homens_c = 0;
    int total_mulher_a = 0;
    int total_mulher_b = 0;
    int total_mulher_c = 0;
    int total_peca_homens_a = 0;
    int total_peca_homens_b = 0;
    int total_peca_homens_c = 0;
    int total_peca_mulher_a = 0;
    int total_peca_mulher_b = 0;
    int total_peca_mulher_c = 0;

    char nome[50]; 
    char vetSexo[1000];
    char vetNumOp[1000] ;
    char operario_maior_salario[50]; 
    char n, i;
    
    cout << "Informe o salario minimo: (R$622,00)" <<endl;
    cin >> salario_minimo;

    do
    {

        cout << "Nome do funcionario: "<<endl;
        
        cin >> nome; 
        cout << "Pecas fabricados no mes: "<<endl;
        
        cin >> vetNumPecas[n];
        
        cout<< "Sexo do funcionario: "<<endl;
        
        cin >> vetSexo[i];

        numero_total_pecas = numero_total_pecas + vetNumPecas[n];

        // Classe A
        if ( vetNumPecas[n] <= 30 )
        {

            vetSalarios[s] = salario_minimo;

            if ( vetSexo[i] == 'M' || vetSexo[i] == 'm' )
            {
                total_homens_a = total_homens_a + 1;
                total_peca_homens_a = total_peca_homens_a + vetNumPecas[n];
            }
            else
            {

                total_mulher_a = total_mulher_a + 1;
                total_peca_mulher_a = total_peca_mulher_a + vetNumPecas[n];
            }

        }
        else
        {

            // Classe B
            if ( vetNumPecas[n] >= 31 && vetNumPecas[n] <= 35 )
            {

                vetSalarios[s] = salario_minimo + ( vetNumPecas[n] - 30 ) * (0.03 * salario_minimo);

                if ( vetSexo[i] == 'M' || vetSexo[i] == 'm' )
                {
                    total_homens_b = total_homens_b + 1;
                    total_peca_homens_b = total_peca_homens_b + vetNumPecas[n];
                }
                else
                {
                    total_mulher_b = total_mulher_b + 1;
                    total_peca_mulher_b = total_peca_mulher_b + vetNumPecas[n];
                    vetSalarios[s] = salario_minimo + vetNumPecas[n] * (0.05 * salario_minimo);
                }

            }
            else
            {

                // Classe C
                vetSalarios[s] = salario_minimo + ( vetNumPecas[n] - 30 ) * (0.05 * salario_minimo);

                if ( vetSexo[i] == 'M' || vetSexo[i] == 'm' )
                {
                    total_homens_c = total_homens_c + 1;
                    total_peca_homens_c = total_peca_homens_c + vetNumPecas[n];
                }
                else
                {
                    total_mulher_c = total_mulher_c + 1;
                    total_peca_mulher_c = total_peca_mulher_c + vetNumPecas[n];
                }

            }
        }

        folha_mensal = folha_mensal + vetSalarios[s];

        if ( vetSalarios[s] > maior_salario )
            (operario_maior_salario, nome); 

        cout << "Salario do funcionario: " <<vetSalarios[s] <<endl;

        cout << "Deseja inserir novos dados? S - Sim ou N - Nao: "<<endl;
        cin >> vetNumOp[n];

    }
    while ( vetNumOp[n] != 'N' && vetNumOp[n] != 'n' );

     cout <<"Folha mensal de pagamentos: " <<folha_mensal<<endl;
    cout <<"Total de peças fabricadas no mes: " <<numero_total_pecas <<endl;

    media = 0;
    if ( total_homens_a > 0)
        media = (total_peca_homens_a / total_homens_a);
    cout <<"Media de pecas de homens da classe A: "<<media <<endl; 

    media = 0;
    if ( total_homens_b > 0)
        media = (total_peca_homens_b / total_homens_b);
    cout <<"Media de pecas de homens da classe B: "<<media <<endl; 

    media = 0;
    if ( total_homens_c > 0)
        media = (total_peca_homens_c / total_homens_c);
    cout <<"Media de pecas de homens da classe C: " <<media <<endl; 

    media = 0;
    if ( total_mulher_a > 0)
        media = (total_peca_mulher_a / total_mulher_a);
    cout <<"Media de pecas de mulheres da classe A: " <<media <<endl; 

    media = 0.0;
    if ( total_mulher_b > 0)
        media = (total_peca_mulher_b / total_mulher_b);
    cout <<"Media de pecas de mulheres da classe B: "<<media <<endl; 

    media = 0;
    if ( total_mulher_c > 0)
        media = (total_peca_mulher_c / total_mulher_c);
    cout <<"Media de pecas de mulheres da classe C: "<<media <<endl; 

    cout <<"Operario com o maior salario da empresa: " <<operario_maior_salario <<endl; 
}


