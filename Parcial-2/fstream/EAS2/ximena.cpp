#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int nlineas();
int npalabras();
void copiar();
string reemplazo("Lorem", "xime");

int main()
{
    cout << "numero de lineas: " << nlineas << endl;
    cout << "numero palabras: " << npalabras << endl;
    copiar();
    string reemplazo("Lorem", "xime");
}

int nlineas()
{
    int cont = 0;
    ifstream archivoEntrada("lorem.txt");
    string texto4;
    while (getline(archivoEntrada, texto4))
    {
        cont++;
    }
    cout << cont;
    archivoEntrada.close();
}

int npalabras()
{
    int cont = 0;
    ifstream archivoEntrada("lorem.txt");
    string texto5;
    int num;
    while (archivoEntrada >> texto5)
    {
        cont++;
    }
    cout << cont;
    archivoEntrada.close();
}

void copiar()
{
    ifstream archivoEntrada("lorem.txt");
    string texto5;
    int num;
    while (archivoEntrada >> texto5)
    {
        ofstream archivoSalida("copia.txt");
        archivoSalida << texto5 << endl;
        archivoSalida.close();
    }
}

string reemplazo("Lorem", "xime")
{
    ifstream archivoEntrada("lorem.txt");
    string texto6;
    int num;
    while (archivoEntrada >> texto6)
    {
        if (texto6 == "Lorem" or texto6 == "dolor")
        {
            texto6 = xime;
        }
        ofstream archivoSalida("reemplazo.txt");
        archivoSalida << texto6 << endl;
        archivoSalida.close();
    }
}
