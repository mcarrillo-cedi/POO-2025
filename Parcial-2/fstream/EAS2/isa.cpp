#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getLineCount();
int getWordCount();
void copyFile();
void replace(string palabra, string npalabra);

int main()
{
    ifstream iFile("lorem.txt");

    cout << "Lineas:" << getLineCount() << endl;
    cout << "Numero de palabras: " << getWordCount() << endl;
    copyFile();
    replace("Lorem", "Hola");

    return 0;
}

int getLineCount()
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

int getWordCount()
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

void copyFile()
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

    return;
}

void replace(string palabra, string npalabra)
{
    ifstream iFile("lorem.txt");
    ofstream oFile("reemplazo.txt");

    string texto;

    while (iFile >> texto)
    {
        if (texto == palabra)
        {
            oFile << npalabra << " ";
        }
        else
        {
            oFile << texto << " ";
        }
    }

    iFile.close();
    oFile.close();

    return;
}
