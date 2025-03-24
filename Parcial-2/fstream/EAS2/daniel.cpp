#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int contadorPalabras()
{
    ifstream iFile("text.txt");
    string texto;
    while (iFile >> texto)
    {
        int a;
        a++;
    }
}

int contadorLineas()
{
    ifstream iFile("text.txt");
    string texto;
    while (getline(iFile, texto))
    {
        int a;
        a++;
    }
}

void copiar()
{
    ofstream oFile("copia.txt");
    ifstream iFile("text.txt");
    string texto;
    while (iFile >> texto)
    {
        oFile << texto;
    }
}

void remplazar(string a, string d)
{
    ofstream oFile("remplazo.txt");
    ifstream iFile("text.txt");
    string d, pal;
    cout << "Cual palabra queres remplazar" << endl;
    cin >> a;
    while (iFile >> pal)
    {
        oFile << d;

        if (a == pal)
        {
            pal = a;
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