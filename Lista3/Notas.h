
class Notas{

private:
    float nota1;
    float nota2;
    float media;

public:
    Notas();

    float getMedia(){return this->media;}

    void setNota1(float nota1){
        this->nota1 = nota1;
    }
    void setNota2(float nota2){
        this->nota2 = nota2;
    }

    void calcularMedia(){
        this->media = this->nota1 + this->nota2;
    }

};

Notas::Notas(){
    this->nota1 = 0;
    this->nota2 = 0;
    this->media = 0;
}