#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int contarLineas(string narc)
{
    ifstream archivo(narc);
    string l;
    int cont = 0;
    while (getline(archivo, l))
    {
        cont++;
    }
    archivo.close();
    return cont;
}

int contarPalabras(string narc)
{
    ifstream archivo(narc);
    string p;
    int cont = 0;
    while (archivo >> p)
    {
        cont++;
    }
    archivo.close();
    return cont;
}

void copiarArchivo(string narc)
{
    ifstream archivo(narc);
    ofstream copia("copia.txt");
    string l;
    while (getline(archivo, l))
    {
        copia << l << endl;
    }
    archivo.close();
    copia.close();
}

void remplazarPalabra(string narc, string precivida, string premplazada)
{
    ifstream archivo(narc);
    ofstream reemplazo("reemplazo.txt");
    string l;
    while (getline(archivo, l))
    {
        if (precivida)
    }
}

int main()
{

    cout << "Numero de lineas: " << contarLineas("lorem.txt") << endl;
    cout << "Numero de palabras: " << contarPalabras("lorem.txt") << endl;
    copiarArchivo("lorem.txt");
    remplazarPalabra("lorem.txt", "Hola", "lorem");
    return 0;
}