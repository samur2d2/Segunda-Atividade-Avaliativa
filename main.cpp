//NÃO VAI RODAR NO REPLIT, USA O CODEBLOXKS.
//DESSA VEZ VOU COMENTAR EM PORTUGUES MESMO, MÓ PREGUIÇA;
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <iomanip>
using namespace std;

//-----------------------------------------------------------------------------------------------------------------
//ESSA FUNÇÃO SERVE PRA PULAR ALGUMAS LINHAS;
void Jump(){for (int i=0; i<3; i++){cout << endl;}};
//-----------------------------------------------------------------------------------------------------------------
//ESSA FUNÇÃO IMPRIME OS +---+ DA PARTE "GRÁFICA";
void HBar(int cont=0){cout << "+"; for(int k=0; k<cont; k++){cout << "-";} cout << "+" << endl;}
//-----------------------------------------------------------------------------------------------------------------
//ESSA FUNÇÃO IMPRIME OS |   | DA PARTE "GRÁFICA";
void HSpace(int cont=0){cout << "|"; for(int k=0; k<cont; k++){cout << " ";} cout << "|" << endl;}
//-----------------------------------------------------------------------------------------------------------------
void FirstWindow(){
    system("cls");
    char option = ' ';

    //INICIA A FUNÇÃO APRESENTANDO UM TEXTO SOBRE O FUNCIONAMENTO.
    Jump();
    cout << "\t "; HBar(41);cout << "\t "; HSpace(41);
    cout << "\t |    TO EXPERIENCE BETTER PERFORMANCE     |" << endl;
    cout << "\t |     I RECOMMEND USING CODE BLOCKS       |" << endl;
    cout << "\t "; HSpace(41);cout << "\t "; HSpace(41);
    cout << "\t |    commands like system(cls) may not    |" << endl;
    cout << "\t |        work correctly elsewhere         |" << endl;
    cout << "\t "; HSpace(41); cout << "\t "; HSpace(41); cout << "\t "; HBar(41);
    cout << "\t |                 Samuel Ribeiro - 05/21  |" << endl;
    cout << "\t "; HBar(41);
    Jump();
    cout << "\t Please enter Y to continue or N to exit: ";
    cin >> option;
    if (toupper(option) == 'Y'){ //CASO ESCOLHA Y, O PROGRAMA SEGUE;
    }else{exit(EXIT_FAILURE);} //QUALQUER OUTRO CARACTER FECHARA O PROGRAMA;
}
//-----------------------------------------------------------------------------------------------------------------
void Printing(int amount=0, int v[]=0, int cont=0){
    system("cls");
    Jump();
    //IMPRIME AS INFORMAÇÕES REFERENTES AO PREENCHUMENTO DO VETOR;
    cout << "\t "; HBar(41); cout << "\t "; HSpace(41);
    cout << "\t |           FILLING INFORMATION           |" << endl;
    cout << "\t "; HSpace(41); cout << "\t "; HBar(41);
    cout << "\t |           TOTAL SPACES: " << setw(6) << amount << "          |" << endl;
    cout << "\t "; HBar(41);
    cout << "\t |        OCCUPIED SPACES: " << setw(6) << (cont) << "          |" << endl;
    cout << "\t "; HBar(41);
    cout << "\t |            FREE SPACES: " << setw(6) << (amount-cont) << "          |" << endl;
    cout << "\t "; HBar(41);

    //MOSTRA O VETOR SENDO PREENCHIDO E QUAIS POSIÇÕES AINDA ESTÃO VAZIAS;
    cout << "\n\n\t "; HBar(71);
    cout << "\t |                          VECTOR INFoRMATIONS                           |" << endl;
    cout << "\t "; HBar(71);
    for(int i=0; i<amount; i++){ //UM FOR PARA IMPRIMIR O VETOR. AMOUNT É A QUANTIDADE DE CASAS DELE;
        if (i % 15 == 0){ //SE FOR O 15º ELEMENTO VAI PULAR DE LINHA;
            if(i == 0){cout<<"\t ";} //SE FOR O PRIMEIRO, NÃO PULA A LINHA;
            else{cout << "\n\t "; for(int k=0;k<71;k++){cout<<" ";} cout<<endl; cout << "\t ";} //SE NAO FOR O PRIMEIRO ENTAO PULA A LINHA
        }
        if (i<cont){ //CONT É A REFERENCIA PRA SABER ATÉ ONDE JA FOI PREENCHIDO;
            if (i % 15 == 0){cout << " [" << v[i] << "] ";}
            else if (i % 15 == 14){cout << "  ";}
            else{cout << "[" << v[i] << "] ";}
        }
        else{ //ESSA PARTE IMPRIME OS ESPAÇOS VAZIOS DO VETOR;
            if (i % 15 == 0){cout << " [ ] ";}
            else if (i % 15 == 14){cout << "[ ] ";}
            else{cout << "[ ] ";}
        }
    }
    cout << "\n\t "; HBar(71);
}
//-----------------------------------------------------------------------------------------------------------------
int FindMax(int vet[]=0, int amount=0){
    int actualMax=0;
    bool firstTime=true;

    //ESSE FOR VAI ANALISAR TODOS OS ELEMENTOS DO VETOR;
    for (int i=0; i<amount; i++){
        if (firstTime == true){ //SE FOR O PRIMEIRO ELEMENTO, ENTAO O VALOR MAXIMO SERA ELE;
            actualMax = vet[i];
            firstTime = false;
        }
        if (actualMax < vet[i]){actualMax = vet[i];} //SE O VALOR MAX FOR MENOR DO QUE O VALOR DO VETOR ENTAO ATUALIZA O VALOR MAX;
    }
    //IMPRIME O VETOR BONITINHO;
    system("cls");
    cout << "\n\n\t "; HBar(61);
    cout << "\t |                     VECTOR INFRMATIONS                      |" << endl;
    cout << "\t "; HBar(61);
    for(int i=0; i<amount; i++){
        if (i % 15 == 0){
            if(i == 0){cout<<"\t ";}
            else{cout << "\n\t "; for(int k=0;k<61;k++){cout<<" ";} cout<<endl; cout << "\t ";}
        }
        if (i % 15 == 14){cout << "  ";}
        else{cout << " [" << vet[i] << "]";}

    }
    cout << "\n\t "; HBar(61);
    return actualMax;
}
//-----------------------------------------------------------------------------------------------------------------
int FindMin(int vet[]=0, int amount=0){//FUNCIONA IGUAL O MAXIMO, POREM SEM A PARTE DE IMPRIMIR;
    int actualMin=0;
    bool firstTime=true;

    for (int i=0; i<amount; i++){
        if (firstTime == true){
            actualMin = vet[i];
            firstTime = false;
        }
        if (actualMin > vet[i]){ actualMin = vet[i];}
    }
    return actualMin;
}
//-----------------------------------------------------------------------------------------------------------------
void FuncExigida(int* pVet, int amount, int* pMin, int* pMax){ //FUNÇÃO APARENTEMENTE INUTIL EXIGIDA;

    *pMin = FindMin(pVet, amount); //ENCONTRA O MENOR VALOR E DEFINE ELE COMO MENOR;
    *pMax = FindMax(pVet, amount); //ENCONTRA O MAIOR VALOR E DEFINE ELE COMO MAIOR;

    cout << "\t |      First position array address: " << setw(10) << pVet << "               |" << endl;
    cout << "\t "; HBar(61);
    cout << "\t |   Amount of elements in the array: " << setw(10) << amount << "               |" << endl;
    cout << "\t "; HBar(61);
    cout << "\t |                 Max value address: " << setw(10) << pMax << "               |" << endl;
    cout << "\t "; HBar(61);
    cout << "\t |                 Min value address: " << setw(10) << pMin << "               |" << endl;
    cout << "\t "; HBar(61);
    cout << "\t |                         Max value: " << setw(10) << *pMax << "               |" << endl;
    cout << "\t "; HBar(61);
    cout << "\t |                         Min value: " << setw(10) << *pMin << "               |" << endl;
    cout << "\t "; HBar(61);
}
//-----------------------------------------------------------------------------------------------------------------
void CollectingData(){
    system("cls");
    Jump();

    int positions=0;
    cout << "\t Enter the number of positions: "; cin >> positions; //TAMANHO DO VETOR;

    int cont=0;
    int vet[positions]; //DEFINE O VETOR COM O TAMANHO DESEJADO;

    for (int i=0; i<positions; i++){
        Printing(positions, vet, cont); //SO PRINTA O VETOR SENDO PREENCHIDO;
        cout << "\t Enter the " << (i+1);
            if (i == 0){cout << "st";}
            else if (i == 1){cout << "nd";}
            else if (i == 2){cout << "rd";}
            else{cout << "th";}
        cout << " number: "; cin >> vet[i];
        cont++;
    }
    int minValue;
    int maxValue;
    int* pVet = vet; //DEFINE UM PONTEIRO APONTANDO PARA O VETOR;
    FuncExigida(pVet, positions, &minValue, &maxValue); //IMPRIME ALGUMAS COISAS;
}
//-----------------------------------------------------------------------------------------------------------------

int main(){

    FirstWindow();

    CollectingData();
}
