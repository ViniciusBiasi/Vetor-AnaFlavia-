#include <iostream>
#include <stdlib.h>
using namespace std;

void Imprime(int conjunto[200], int Tam){
    for(int i=0;i<Tam;i++){
        cout<<conjunto[i]<<", ";
    }
}

int Altera(int conjunto[100]){
    int contador=0;
    int valor;
    do{
        cout<<"\n\nDigite um valor ou -1 para sair: ";
        cin>>valor;

        if(valor>=0){
            conjunto[contador]=valor;
            contador++;
            cout<<"\n\nValor inserido!\n\n";
        }else{
            cout<<"\n\nValor invalido!\n\n";
        }
        system("cls");
    }while(valor!=-1 && contador<100);

    if(contador==100){
        cout<<"\n\nTamanho do conjunto foi atingido!\n\n";
    }
    return contador;
}

bool Existe(int valor, int conjunto[200], int Tam){
    for(int i=0;i<Tam;i++){
        if(conjunto[i]==valor){
            return true;
        }
    }
    return false;
}

int Uniao(int ConjA[100], int ElemA, int ConjB[100], int ElemB, int ConjU[200]){
    int TamU;
    for(int i=0;i<ElemA;i++){
        ConjU[i]=ConjA[i];
    }
    TamU=ElemA;

    for(int i=0;i<ElemB;i++){
        if( ! Existe(ConjB[i],ConjU,TamU)){
            ConjU[TamU]=ConjB[i];
            TamU++;
        }
    }
    return TamU;
}

int Intersecao(int ConjA[100], int ElemA, int ConjB[100], int ElemB, int ConjI[100]){
    int ContI=0;
    for(int i=0;i<ElemA;i++){
        if( Existe(ConjA[i],ConjB,ElemB) ){
            ConjI[ContI]=ConjA[i];
            ContI++;
        }
    }
    return ContI;
}

int Diferenca(int ConjA[100], int ElemA, int ConjB[100], int ElemB, int ConjD[100]){
    /*
    A = 1, 2, 6, 8, 9

    B = 2, 4, 6, 9, 10

    A - B = 1, 8,

    B - A =4, 10,

    U = 1, 2, 6, 8, 9, 4, 10,

    I = 2, 6, 9,

    */
    int contador=0;
    int aux;
    for(int i=0;i<ElemA;i++){
        if( ! Existe(ConjA[i],ConjB,ElemB) ){
            ConjD[contador] = ConjA[i];
            contador++;
        }
    }
    return contador;
}

int main(){
    int opcao;

    int A[100], B[100];
    int ContA=0, ContB=0;

    int UNIAO[200];
    int ContU=0;

    int INTERSEC[100];
    int ContI=0;

    int DIFERENCA[100];
    int ContD=0;


    while(1){
        system("cls");
        cout<<"\n\n Conjuntos \n\n";

        cout<<"A = {";
        if(ContA!=0) Imprime(A,ContA);
        else cout<<"VAZIO";
        cout<<"}\n";

        cout<<"B = {";
        if(ContB!=0) Imprime(B,ContB);
        else cout<<"VAZIO";
        cout<<"}\n\n";

        cout<<"   --- MENU --- \n\n";

        cout<<" 1 - Alterar conjunto A\n";
        cout<<" 2 - Alterar conjunto B\n";
        cout<<" 3 - Uniao dos conjuntos\n";
        cout<<" 4 - Intersecao dos conjuntos\n";
        cout<<" 5 - Subconjuntos A - B\n";
        cout<<" 6 - Subconjuntos B - A\n";
        cout<<" 7 -  A e B s�o conjuntos id�nticos ou disjuntos: \n";
        cout<<" 8 - Calcule o produto escalar entre A e B \n";
        cout<<" 9 - O conjunto G, formado pelos membros que comp�em a maior sub-cadeia ordenada de forma crescente em A....;\n";
        cout<<" 10 - Diferente de A e B: \n";
        cout<<" 11 - Diferente de B e A: \n";
        cout<< "12 - Sair\n";

        cout<<"\nOpcao desejada: ";
        cin>>opcao;

        switch(opcao){
        	int aux;
            case 1: //Alterar A
                system("cls");
                cout<<"\n\nAlterar o conjunto A\n\n";
                ContA = Altera(A);
                break;
            case 2: //Alterar B
                system("cls");
                cout<<"\n\nAlterar o conjunto B\n\n";
                ContB = Altera(B);
                break;
            case 3:
                system("cls");
                cout<<"\n\nUniao\n\n";
                ContU = Uniao(A,ContA,B,ContB,UNIAO);
                cout<<"U = {";
                Imprime(UNIAO,ContU);
                cout<<"}\n\n";
                system("pause");
                break;
            case 4:
                system("cls");
                cout<<"\n\nIntersecao\n\n";
                ContI = Intersecao(A,ContA,B,ContB,INTERSEC);
                cout<<"I = {";
                Imprime(INTERSEC,ContI);
                cout<<"}\n\n";
                system("pause");
                break;
            case 5:
                system("cls");
                cout<<"\n\nSUBCONJUNTO A - B\n\n";
                ContD = Diferenca(A,ContA,B,ContB,DIFERENCA);
                cout<<"I = {";
                Imprime(DIFERENCA,ContD);
                cout<<"}\n\n";
                system("pause");
                break;
            case 6:
                system("cls");
                cout<<"\n\nSUBCONJUNTO B - A\n\n";
                ContD = Diferenca(B,ContB,A,ContA,DIFERENCA);
                cout<<"I = {";
                Imprime(DIFERENCA,ContD);
                cout<<"}\n\n";
                system("pause");
                break;
            case 7:
                system("cls");
            if (ContU == ContD);
            cout<<"S�o d�nticos  \n";
            if (ContU != ContD);
            cout<<"S�o disjuntos \n";
          
                system("pause");
                break;
                
            case 8: 
             system("cls");
            cout << "\n \n Calculo do produto escalar entre A e B....\n\n";
              aux = ContA * ContB;
            cout << " \n O valor �:" <<aux;
			   system("pause");
                break;
                
                 case 9: 
             system("cls");
            cout << "\n \n O conjunto G, formado pelos membros que comp�em a maior sub-cadeia ordenada de forma crescente em A;....\n\n";
            ContD = Diferenca(A,ContA,B,ContB,DIFERENCA);
                cout<<"I = {";
                Imprime(DIFERENCA,ContD);
                cout<<"}\n\n";
                system("pause");
                break;
                
                case 10: 
                  system("cls");
                cout<<"\n\nDiferen�a A - B\n\n";
                ContD = Diferenca(A,ContA,B,ContB,DIFERENCA);
                cout<<"I = {";
                Imprime(DIFERENCA,ContD);
                cout<<"}\n\n";
                system("pause");
                break;
                
                case 11: 
                 system("cls");
                cout<<"\n\nDiferen�a B - A\n\n";
                ContD = Diferenca(B,ContB,A,ContA,DIFERENCA);
                cout<<"I = {";
                Imprime(DIFERENCA,ContD);
                cout<<"}\n\n";
                system("pause");
                break;
                
                  case 12:
                cout<<"\nFinalizando...\n\n";
                system("pause");
                exit(0);
                break;
                
                
            default:
                cout<<"Opcao invalida! Tente novamente\n\n";
                system("pause");
        }


    }
    return 0;
}
