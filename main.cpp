#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <conio.h>
using namespace std;

void FirstWindow(){
    system("cls");
    char option = ' ';
    for (int i=0; i<3; i++){cout << endl;}
    cout << "\t +-----------------------------------------+" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |    TO EXPERIENCE BETTER PERFORMANCE     |" << endl;
    cout << "\t |     I RECOMMEND USING CODE BLOCKS       |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |    commands like system(cls) may not    |" << endl;
    cout << "\t |        work correctly elsewhere         |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t +-----------------------------------------+" << endl;
    cout << "\t |                 Samuel Ribeiro - 05/21  |" << endl;
    cout << "\t +-----------------------------------------+" << endl;
    for (int i=0; i<3; i++){cout << endl;}
    cout << "\t Please enter Y to continue or N to exit: ";
    cin >> option;
    if (toupper(option) == 'Y'){
    }else{exit(EXIT_FAILURE);}

}

//-----------------------------------------------------------------------------------------------------------------

void SecondWindow(){
    system("cls");
    for (int i=0; i<3; i++){cout << endl;}
    cout << "\t +-----------------------------------------+" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |     THE FIRST NUMBER MUST INDICATE      |" << endl;
    cout << "\t |    THE AMOUNT OF NUMBERS TO BE ADDED    |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t +-----------------------------------------+" << endl;
    cout << "\t |              Press any key to continue  |" << endl;
    cout << "\t +-----------------------------------------+" << endl;
    for (int i=0; i<3; i++){cout << endl;}
    getch();
}

//-----------------------------------------------------------------------------------------------------------------
void Exemple(){
    system("cls");
    for (int i=0; i<3; i++){cout << endl;}

    int positions=0;
    cout << "\t Enter the number of positions: "; cin >> positions;

    int vet[positions];
    for (int i=0; i<positions; i++){
        cout << "\t Enter the " << (i+1);
            if (i == 0){cout << "st";}
            else if (i == 1){cout << "nd";}
            else if (i == 2){cout << "rd";}
            else{cout << "th";}
        cout << " number: "; cin >> vet[i];
        }
    }


//-----------------------------------------------------------------------------------------------------------------

int main(){

    //FirstWindow();

    //SecondWindow();

    Exemple();

}
