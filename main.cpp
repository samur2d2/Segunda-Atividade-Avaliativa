#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <iomanip>
using namespace std;

//-----------------------------------------------------------------------------------------------------------------
void Jump(){for (int i=0; i<3; i++){cout << endl;}};
//-----------------------------------------------------------------------------------------------------------------
void HBar(int cont=0){cout << "+"; for(int k=0; k<cont; k++){cout << "-";} cout << "+" << endl;}
//-----------------------------------------------------------------------------------------------------------------
void HSpace(int cont=0){cout << "|"; for(int k=0; k<cont; k++){cout << " ";} cout << "|" << endl;}
//-----------------------------------------------------------------------------------------------------------------
void FirstWindow(){
    system("cls");
    char option = ' ';
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
    if (toupper(option) == 'Y'){
    }else{exit(EXIT_FAILURE);}
}
//-----------------------------------------------------------------------------------------------------------------
void SecondWindow(){
    system("cls");
    Jump();
    cout << "\t "; HBar(41); cout << "\t "; HSpace(41);
    cout << "\t |     THE FIRST NUMBER MUST INDICATE      |" << endl;
    cout << "\t |    THE AMOUNT OF NUMBERS TO BE ADDED    |" << endl;
    cout << "\t "; HSpace(41); cout << "\t "; HBar(41);
    cout << "\t |              Press any key to continue  |" << endl;
    cout << "\t "; HBar(41);
    Jump();
    getch();
}
//-----------------------------------------------------------------------------------------------------------------
void Printing(int amount=0, int v[]=0, int cont=0){
    system("cls");
    Jump();
    cout << "\t "; HBar(41);cout << "\t "; HSpace(41);
    cout << "\t |           FILLING INFORMATION           |" << endl;
    cout << "\t "; HSpace(41);
    cout << "\t "; HBar(41);
    cout << "\t |           TOTAL SPACES: " << setw(6) << amount << "          |" << endl;
    cout << "\t "; HBar(41);
    cout << "\t |        OCCUPIED SPACES: " << setw(6) << (cont) << "          |" << endl;
    cout << "\t "; HBar(41);
    cout << "\t |            FREE SPACES: " << setw(6) << (amount-cont) << "          |" << endl;
    cout << "\t "; HBar(41);

    cout << "\n\n\t "; HBar(71);
    cout << "\t |                          VECTOR INFoRMATIONS                           |" << endl;
    cout << "\t "; HBar(71);
    for(int i=0; i<amount; i++){
        if (i % 15 == 0){
            if(i == 0){cout<<"\t ";}
            else{cout << "\n\t "; for(int k=0;k<71;k++){cout<<" ";} cout<<endl; cout << "\t ";}
        }
        if (i<cont){
            if (i % 15 == 0){cout << " [" << v[i] << "] ";}
            else if (i % 15 == 14){cout << "  ";}
            else{cout << "[" << v[i] << "] ";}
        }
        else{
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

    for (int i=0; i<amount; i++){
        if (firstTime == true){
            actualMax = vet[i];
            firstTime = false;

        }
        if (actualMax < vet[i]){
            actualMax = vet[i];
        }
    }

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
int FindMin(int vet[]=0, int amount=0){
    int actualMin=0;
    bool firstTime=true;

    for (int i=0; i<amount; i++){
        if (firstTime == true){
            actualMin = vet[i];
            firstTime = false;
        }
        if (actualMin > vet[i]){
            actualMin = vet[i];
        }
    }
    return actualMin;
}
//-----------------------------------------------------------------------------------------------------------------
void FuncExigida(int* pVet, int amount, int* pMin, int* pMax){
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
    //system("cls");
    for (int i=0; i<3; i++){cout << endl;}

    int positions=0;
    cout << "\t Enter the number of positions: "; cin >> positions;

    int cont=0;
    int vet[positions];

    for (int i=0; i<positions; i++){
        Printing(positions, vet, cont);
        cout << "\t Enter the " << (i+1);
            if (i == 0){cout << "st";}
            else if (i == 1){cout << "nd";}
            else if (i == 2){cout << "rd";}
            else{cout << "th";}
        cout << " number: "; cin >> vet[i];
        cont++;
    }
    int minValue = FindMin(vet, positions);
    int maxValue = FindMax(vet, positions);

    int* pVet = vet;
    FuncExigida(pVet, positions, &minValue, &maxValue);

}
//-----------------------------------------------------------------------------------------------------------------

int main(){

    FirstWindow();

    SecondWindow();

    CollectingData();

}
