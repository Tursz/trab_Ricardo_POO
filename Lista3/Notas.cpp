#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include "Notas.h"
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8);
    float nota1, nota2, media;
    Notas nota;

    cout<<"Digite a primeira nota do aluno:";
    cin>>nota1;
    nota.setNota1(nota1);
    cout<<"Digite a segunda nota do aluno:";
    cin>>nota2;
    nota.setNota2(nota2);
    nota.calcularMedia();
    media = nota.getMedia();
    if(media >= 60){
        cout<<"Aluno Aprovado!";
    }else{
        cout<<"Aluno Reprovado!";
    }
    getch();
}
