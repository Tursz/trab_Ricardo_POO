#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Bhaskara {
private:
    float a, b, c;
    float delta;
    float x1, x2;
    bool temRaizesReais;

public:
    Bhaskara(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
        delta = 0;
        x1 = 0;
        x2 = 0;
        temRaizesReais = false;
    }

    void calcularDelta() {
        delta = pow(b, 2) - 4 * a * c;
        temRaizesReais = (delta >= 0);
    }

    void calcularRaizes() {
        if (temRaizesReais) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
        }
    }

    void resolver() {
        if (a == 0) {
            cout << "Nao e uma equacao do segundo grau." << endl;
            return;
        }

        calcularDelta();
        if (!temRaizesReais) {
            cout << "A equacao nao possui raizes reais." << endl;
            return;
        }

        calcularRaizes();
        exibirRaizes();
    }

    void exibirRaizes() {
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }
};