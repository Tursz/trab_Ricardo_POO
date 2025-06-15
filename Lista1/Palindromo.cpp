#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include "../Palindromo.h"
#include <windows.h>
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
    Palindromo palin;
    char word[70];

    cout<<"Digite uma palavra ou frase para descobrir se é um plaindromo:"<<endl;
    cin.getline(word, 70);
    palin.discoverPali(word);
    getch();
}
