#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include "Bhaskara.h"
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
    float coefA, coefB, coefC;

    cout<<"Digite a coeficiente A: ";
    cin>>coefA;
    cout<<"Digite a coeficiente B: ";
    cin>>coefB;
    cout<<"Digite a coeficiente C: ";
    cin>>coefC;

    Bhaskara bhask(coefA, coefB, coefC);

    bhask.resolver();
    getch();
}
