#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
Crea un programa que pueda realizar las siguientes operaciones:
- Contar el número de líneas en un archivo.
- Contar el número de palabras en un archivo.
- Copiar los contenidos de un archivo a otro.
- Reemplazar una palabra por otra en un nuevo archivo.

El programa debe de funcionar correctamente con el archivo adjunto.
El nombre del archivo al que debe copiar el contenido debe ser "copia.txt"
El nombre del archivo al que debe reemplazar la palabra debe ser "reemplazo.txt"

Cada una de las funcionalidades debe ser una función independiente.

La función de reemplazar recibe 2 parámetros que son la palabra a reemplazar y por cuál la va a reemplazar.
Es más sencillo reemplazar en un nuevo archivo que reemplazar sobre el mismo :)
El archivo con el reemplazo puede estar escrito en 1 sola línea.

El resto de las funciones no necesitan parámetros.
*/

void numLineas();
void numPal();
void reemPal(string a, string b);
void copiarCont();

int main()
{
    ifstream archivoEntrada("texto.txt");
    cout << "Lineas: ";
    numLineas();
    cout << "Palabras: ";
    numPal();
    copiarCont();
    reemPal("Lorem", "Hola");
    archivoEntrada.close();

    return 0;
}

void numLineas()
{
    ifstream archivoEntrada("texto.txt");
    string line;
    int nl = 0;
    while (getline(archivoEntrada, line))
    {
        nl++;
    }
    cout << nl << endl;
    archivoEntrada.close();
}

void numPal()
{
    ifstream archivoEntrada("texto.txt");
    string pal;
    int np = 0;
    while (archivoEntrada >> pal)
    {
        np++;
    }
    cout << np << endl;
    archivoEntrada.close();
}

void copiarCont()
{
    ifstream archivoEntrada("texto.txt");
    ofstream oFile("copia.txt");
    string line;
    while (getline(archivoEntrada, line))
    {
        oFile << line << endl;
    }

    oFile.close();
    archivoEntrada.close();
}

void reemPal(string a, string b)
{
    ifstream archivoEntrada("texto.txt");
    ofstream oFile("reemplazo.txt");
    string pal;
    while (archivoEntrada >> pal)
    {
        if (pal == a)
        {
            oFile << b << " ";
        }
        else
        {
            oFile << pal << " ";
        }
    }

    oFile.close();
    archivoEntrada.close();
}