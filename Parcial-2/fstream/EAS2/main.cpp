#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int numLineas();
int numPalabras();
void reemplazar(string p1, string p2);
void copiar();

int main()
{
    cout << "Numero de lineas: " << numLineas() << endl;
    cout << "Numero de palabras: " << numPalabras() << endl;
    copiar();
    reemplazar("Lorem", "Hola");

    return 0;
}

int numLineas()
{
    ifstream iFile("lorem.txt");
    string texto;
    int lineas = 0;
    while (getline(iFile, texto))
    {
        lineas++;
    }

    iFile.close();
    return lineas;
}

int numPalabras()
{
    ifstream iFile("lorem.txt");
    string texto;
    int palabras = 0;
    while (iFile >> texto)
    {
        palabras++;
    }

    iFile.close();
    return palabras;
}

void copiar()
{
    ifstream iFile("lorem.txt");
    ofstream oFile("copia.txt");

    string texto;
    while (getline(iFile, texto))
    {
        oFile << texto << endl;
    }

    iFile.close();
    oFile.close();
}

void reemplazar(string p1, string p2)
{
    ifstream iFile("lorem.txt");
    ofstream oFile("reemplazo.txt");

    string texto;
    while (iFile >> texto)
    {
        if (texto == p1)
        {
            oFile << p2 << " ";
        }
        else
        {

            oFile << texto << " ";
        }
    }
}