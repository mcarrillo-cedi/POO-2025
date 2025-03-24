#include <iostream>
#include <string>
#include <fstream>
using namespace std;



void contarLineas();
void contarPalabras();
void copiarArchivo();
void reemplazarArchivo(string palabra, string reemplazo);



int main(){

    cout << "ingresa una opcion: " << endl;

    string palabra;
    string remplazo;
    cout << "1. contar lineas" << endl;
    cout << "2. contar palabras" << endl;
    cout << "3. copiar Archivo" << endl;
    cout << "4. reemplazar palabra" << endl;
    int opc; 
    cin >> opc;

    switch (opc)
    {
    case 1:
        contarLineas();
        break;

    case 2:
        contarPalabras();
        break;
    case 3: 
        copiarArchivo();
        break;
    case 4:
        cout << "ingresa la palabra que quieras reemplazar: ";
        cin >> palabra;

        cout << "ingresa la palabra por la que la quieras reemplazar: ";
        cin >> remplazo;
        
        reemplazarArchivo(palabra, remplazo);
        break;
    
    default:
        break;
    }


    return 0;
}




void contarPalabras(){
    ifstream iFile("lorem.txt");
    string texto;
    int contador = 0;

    while(iFile >> texto){
        contador++;
    }

    iFile.close();

    cout << "palabras en el archivo: " << contador;
}

void copiarArchivo(){
    ifstream iFile("lorem.txt");
    ofstream oFile("copy.txt");
    string texto;
    int contador = 0;

    while(getline(iFile, texto)){

        oFile << texto;
        oFile << endl;
        
    }



    iFile.close();
    oFile.close();


}


void contarLineas(){
    ifstream iFile("lorem.txt");
    string texto;
    int contador = 0;
    while(getline(iFile, texto)){
        contador++;
    }


    iFile.close();
    cout << "Lineas en el archivo: " << contador;
}

void reemplazarArchivo(string palabra, string reemplazo){
    ifstream iFile("lorem.txt");
    ofstream oFile("reemplazo.txt");
    string texto;
    int contador = 0;

    while(iFile >> texto){

        if(texto == palabra){
            oFile << reemplazo << " ";
        }
        else{
            oFile << texto << " ";
        }

        
    }



    iFile.close();
    oFile.close();

}