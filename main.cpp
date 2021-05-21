#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <conio.h>
using namespace std;

void FirstWindow(){
    for (int i=0; i<30; i++){cout<<endl;}
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
    for (int i=0; i<30; i++){cout<<endl;}
    char option = ' ';
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

int main(){

    //FirstWindow();

    SecondWindow();

}
