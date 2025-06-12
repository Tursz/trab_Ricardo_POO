#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include "Calculadora.h"
using namespace std;


int main(){
    Calculadora calc;
    float num1, num2;
    int option;
    do{
        system("cls");
        cout<<"Digite a operação desejada: "<<endl;
        cout<<"1 - Soma"<<endl;
        cout<<"2 - Subtração"<<endl;
        cout<<"3 - Multiplicação"<<endl;
        cout<<"4 - Divisão"<<endl;
        cout<<"5 - Sair"<<endl;
        cin>>option;
        switch(option){
            case 1:
                cout<<"Digite o primeiro numero: "<<endl;
                cin>>num1;
                cout<<"Digite o segundo numero: "<<endl;
                cin>>num2;
                calc.somar(num1, num2);
                cout<<"Resultado: "<<calc.getResultado();
                getch();
                break;
            case 2:
                cout<<"Digite o primeiro numero: "<<endl;
                cin>>num1;
                cout<<"Digite o segundo numero: "<<endl;
                cin>>num2;
                calc.subtrair(num1, num2);
                cout<<"Resultado: "<<calc.getResultado();
                getch();
                break;
            case 3:
                cout<<"Digite o primeiro numero: "<<endl;
                cin>>num1;
                cout<<"Digite o segundo numero: "<<endl;
                cin>>num2;
                calc.multiplicar(num1, num2);
                cout<<"Resultado: "<<calc.getResultado();
                getch();
                break;
            case 4:
                cout<<"Digite o primeiro numero: "<<endl;
                cin>>num1;
                cout<<"Digite o segundo numero: "<<endl;
                cin>>num2;
                calc.dividir(num1, num2);
                cout<<"Resultado: "<<calc.getResultado();
                getch();
                break;
        }
    }while(option !=5);

    getch();
}
