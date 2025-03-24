#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void contarLineas();
void contarPalabras();
void copiarContenido();
void reemlazarPalabra(string remp, string nueva);

int main()
{
    contarLineas();
    contarPalabras();
    copiarContenido();
    // reemlazarPalabra();
}

void contarLineas()
{
    ifstream iFile("texto.txt");

    string texto1;
    int j = 0;
    while (getline(iFile, texto1))
    {
        j++;
    }
    cout << "Lineas: " << j << endl;
    iFile.close();
}

void contarPalabras()
{
    ifstream iFile("texto.txt");

    string texto;
    int i = 0;
    while (iFile >> texto)
    {
        i++;
    }
    cout << "Palabras: " << i << endl;
    iFile.close();
}

void copiarContenido()
{
    ifstream iFile("texto.txt");
    ofstream oFile("copia.txt");
    string line;
    while (getline(iFile, line))
    {
        oFile << line;
    }
    iFile.close();
    oFile.close();
}
void reemlazarPalabra()
{
    ifstream iFile("texto.txt");
    ofstream oFile("copia.txt");
    string texto3;
    while (iFile >> texto3)
    {
        if (texto3 == "Lorem")
        {
            oFile << "Hola";
        }
    }
    iFile.close();
    oFile.close();
}
/*

- Copiar los contenidos de un archivo a otro.
- Reemplazar una palabra por otra en un nuevo archivo.
*/