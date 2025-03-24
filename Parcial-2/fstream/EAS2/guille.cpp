#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int contadorPalabras()
{
    ifstream iFile("suamtiva.txt");
    string texto;
    while (iFile >> texto)
    {
        int a;
        a++;
    }
}

int contadorLineas()
{
    ifstream iFile("sumativa.txt");
    string texto1;
    while (getline(iFile, texto1))
    {
        int a;
        a++;
    }
}

void copiar()
{
    ofstream oFile("copia.txt");
    ifstream iFile("sumativa.txt");
    string texto2;
    while (iFile >> texto2)
    {
        oFile << texto2;
    }
}

void remplazar(string a, string d)
{
    ofstream oFile("remplazo.txt");
    ifstream iFile("sumativa.txt");
    string d, pala;
    cout << "Cual palabra queres remplazar" << endl;
    cin >> a;
    while (iFile >> pala)
    {
        oFile << d;

        if (a == pala)
        {
            pala = a;
        }
    }
}

int main()
{
    cout << "Lineas: " << contadorLineas() << endl;
    cout << "palabras: " << contadorPalabras() << endl;

    copiar();
    remplazar("Lorem", "Hola");

    return 0;
}
