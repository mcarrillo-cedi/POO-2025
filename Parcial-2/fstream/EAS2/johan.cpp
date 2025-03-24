#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarLineas();
int contarPalabras();
void copiarContenido();
void reemplazarPalabra(string palabraBusqueda, string palabraReemplazo);

int main()
{
    cout << "Lineas: " << contarLineas() << endl;
    cout << "Palabras: " << contarPalabras() << endl;
    copiarContenido();
    reemplazarPalabra("Lorem", "Hola");
    return 0;
}

int contarLineas()
{
    ifstream loremus("lorem.txt");
    string junk;
    int cont = 0;
    while (getline(loremus, junk))
    {
        cont++;
    }
    loremus.close();
    return cont;
}
int contarPalabras()
{
    ifstream loremus("lorem.txt");
    string junk;
    int cont = 0;
    while (loremus >> junk)
    {
        cont++;
    }
    loremus.close();
    return cont;
}
void copiarContenido()
{
    ifstream loremus("lorem.txt");
    ofstream exemus("copia.txt");
    string copy;
    while (getline(loremus, copy))
    {
        exemus << copy << endl;
    }
    exemus.close();
    loremus.close();
}
void reemplazarPalabra(string palabraBusqueda, string palabraReemplazo)
{
    ifstream loremus("lorem.txt");
    ofstream extremus("reemplazo.txt");
    string search;
    while (loremus >> search)
    {
        if (search == palabraBusqueda)
        {
            search = palabraReemplazo;
        }
        extremus << search << " ";
    }
    extremus.close();
    loremus.close();
}