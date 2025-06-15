class Calculadora{
    private:
        float resultado;

    public:
        Calculadora();
        float getResultado(){ return this->resultado;}

        void somar(float num1, float num2);
        void multiplicar(float num1, float num2);
        void dividir(float num1, float num2);
        void subtrair(float num1, float num2);
};

Calculadora::Calculadora(){
    this->resultado = 0;
}

void Calculadora::somar(float num1, float num2){
    this->resultado = num1 + num2;
}

void Calculadora::multiplicar(float num1, float num2){
    this->resultado = num1 * num2;
}

void Calculadora::dividir(float num1, float num2){
    this->resultado = num1 / num2;
}

void Calculadora::subtrair(float num1, float num2){
    this->resultado = num1 - num2;
}