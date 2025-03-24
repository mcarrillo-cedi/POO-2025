#include <iostream>
#include <string>
#include <fstream>
#include "main.hpp"
using namespace std;

int main()
{
    contarlineas();
    contarpalabras();
    copiar();
    remplazar("Lorem", "Hola");
    return 0;
}

void contarlineas()
{
    ifstream archivo("lorem.txt");
    string lineas;
    int contador = 0;
    while (getline(archivo, lineas))
    {
        contador++;
    }
    cout << "El archivo tiene " << contador << " lineas" << endl;
    archivo.close();
}

void contarpalabras()
{
    ifstream archivo("lorem.txt");
    string palabras;
    int contador = 0;
    while (archivo >> palabras)
    {
        contador++;
    }
    cout << "El archivo tiene " << contador << " palabras" << endl;
    archivo.close();
}
void copiar()
{
    ifstream archivo("lorem.txt");
    ofstream copia("copia.txt");
    string lineas;
    while (getline(archivo, lineas))
    {
        copia << lineas << endl;
    }
}
void remplazar(string palabra1, string palabra2)
{
    ifstream archivo("lorem.txt");
    ofstream replaced("replaced.txt");
    string palabras;
    while (archivo >> palabras)
    {
        if (palabras == palabra1)
        {
            replaced << palabra2 << " ";
        }
        else
        {
            replaced << palabras << " ";
        }
    }
}