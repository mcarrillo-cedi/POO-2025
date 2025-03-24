#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int getLineCount();
int getWordCount();
void copy();
void replace(string palabra, string reemplazo);

int main()
{

    cout << "Lineas: " << getLineCount() << endl;
    cout << "Palabras: " << getWordCount() << endl;
    copy();
    replace("Lorem", "Hola");

    return 0;
}

int getLineCount()
{
    ifstream iFile("lorem.txt");
    string texto;
    int s = 0;
    while (getline(iFile, texto))
    {
        s++;
    }

    iFile.close();

    return s;
}

int getWordCount()
{
    ifstream iFile("lorem.txt");

    string texto;
    int s = 0;
    while (getline(iFile, texto))
    {
        while (iFile >> texto)
        {
            s++;
        }
    }
    iFile.close();

    return s;
}

void copy()
{
    ofstream oFile("copia.txt");
    ifstream iFile("lorem.txt");
    string texto;
    while (getline(iFile, texto))
    {
        while (iFile >> texto)
        {
            oFile << texto << endl;
        }
    }
    iFile.close();
    oFile.close();
}

void replace(string palabra, string reemplazo)
{
    ofstream oFile("reemplazo.txt");
    ifstream iFile("lorem.txt");

    string texto;

    while (iFile >> texto)
    {
        if (palabra == texto)
        {
            oFile << reemplazo;
        }
    }

    iFile.close();
    oFile.close();
}