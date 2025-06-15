#include <cstring>

class Palindromo
{
public:
    Palindromo();

    void discoverPali(char palavra[]);
};

Palindromo::Palindromo() {};

void Palindromo::discoverPali(char palavra[])
{
    using namespace std;
    system("cls");

    int z = 0, contador = 0, j = 0, x = 0;
    char noSpace[70], invert[70];
    for (; palavra[z] != '\0'; z++)
    {
        if (palavra[z] != ' ')
        {
            noSpace[x] = palavra[z];
            x++;
            contador++;
        }
    }
    noSpace[x] = '\0';
    for (; j < contador; j++)
    {
        x--;
        invert[j] = noSpace[x];
    }
    invert[j] = '\0';
    for (int x = 0; x < j; x++)
    {
        invert[x] = tolower(invert[x]);
        noSpace[x] = tolower(noSpace[x]);
    }
    if (strcmp(noSpace, invert) == 0)
    {
        cout<<"A palavra é um palindromo"<<endl;
    }
    else
    {
        cout<<"A palavra não é um palindromo"<<endl;
    }
};