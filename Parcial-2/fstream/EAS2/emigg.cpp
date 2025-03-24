#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void contarLineas();
void contarPalabras();
void copiar();
void reemplazar(string a, string b);

int main()
{
    int opc = 0;

    ifstream texto(lorem.txt);

    while (opc != 5)
    {
        cout << "1) Contar el número de líneas en un archivo" << endl;
        cout << "2) Contar el número de palabras en un archivo" << endl;
        cout << "3) Copiar los contenidos de un archivo a otro" << endl;
        cout << "4) Reemplazar una palabrapor otra en un nuevo archivo" << endl;
        cout << "5) Salir" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
        {
            contarLineas();
            break;
        }
        case 2:
        {
            contarPalabras();
            break;
        }
        case 3:
        {
            copiar();
            break;
        }
        case 4:
        {
            reemplazar("Lorem", "Hola");
            break;
        }
        case 5:
        {
            break;
            return 0;
        }

        default:
            cout << "Opción no válida, intente de nuevo" << endl;
            break;
        }
    }

    texto.close();
    return 0;
}
void contarLineas()
{
    ifstream archivoEntrada;
    ofstream archivoSalida;
    int contLinea = 0;
    string linea;
    string texto;
    archivoEntrada.open("lorem.txt");
    while (getline(archivoEntrada, linea))
    {
        contLinea++;
    }
    cout << "# de lineas: " << contLinea << endl;
}

void contarPalabras()
{
    ifstream archivo;
    string palabra;
    int contPalabras = 0;

    archivo.open(lorem.txt);

    if (archivo.is_open())
    {
        while (archivo >> palabra)
        {
            contPalabras++;
        }

        cout << "# de palabras: " << contPalabras << endl;
        archivo.close();
    }
    void copiar()
    {
        ofstream archivoSalida("copia.txt");

        archivoSalida << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas felis massa, vestibulum nec ex vel, venenatis sagittis lectus. Duis urna ante, dictum eget varius pharetra, volutpat eu elit. Pellentesque eleifend turpis nisi, vitae dignissim nunc ultricies nec. Aenean iaculis augue congue, placerat velit sed, tincidunt metus. Curabitur ante risus, scelerisque vitae velit sit amet, euismod placerat justo. Donec commodo pharetra sapien, sollicitudin semper odio elementum eu. Pellentesque in libero tempor, semper velit ut, interdum metus. Quisque vel elit at justo consequat dignissim. Duis dui sapien, viverra et tincidunt quis, aliquam id orci. Sed vel arcu sed nisi elementum tincidunt et nec nisi. Mauris mauris diam, aliquam eget urna quis, iaculis scelerisque odio. Morbi a arcu ac sem tristique consectetur non sit amet mauris. Curabitur non nisi quis elit iaculis scelerisque. Suspendisse ultricies aliquam nunc. Donec ut dolor ut est tempor feugiat. Morbi dictum nec metus nec porta." << endl;
        archivoSalida << " " << endl;
        archivoSalida << "In suscipit lacus vitae orci tincidunt mollis. Suspendisse euismod est lacus. Cras pharetra dignissim augue ornare ultrices. Pellentesque non lorem nec lacus egestas rutrum. Duis eget odio purus. Sed posuere sagittis pharetra. Mauris nisi elit, sagittis at lacus at, porttitor scelerisque erat. Nam laoreet vehicula semper. Morbi non sem odio. Mauris vulputate lacus ac diam imperdiet egestas. Vestibulum massa turpis, imperdiet vel pulvinar at, volutpat ut augue. Cras consectetur et velit in efficitur. Phasellus eu ligula nec arcu hendrerit semper. Praesent consequat velit mattis libero cursus ornare. Ut eu lorem elit. Sed velit velit, hendrerit sit amet dolor ut, pharetra laoreet neque." << endl;
        archivoSalida << " " << endl;
        archivoSalida << "Curabitur interdum justo dolor, eu sagittis lorem rutrum ac. Praesent tortor leo, vestibulum viverra porta quis, ultricies a diam. Curabitur quis neque molestie sem condimentum lacinia non ut nisl. Suspendisse aliquet nunc vitae turpis ultrices tincidunt. Donec a sodales nibh. Aenean mollis cursus nisi, eu suscipit ligula tristique eget. Pellentesque quis tellus rutrum, porta lectus sed, malesuada dui. Quisque imperdiet ipsum sed leo bibendum, id commodo urna rutrum. Donec vel condimentum ante. In eget ex rhoncus est dictum molestie. Curabitur a magna nunc. Curabitur quis convallis urna. Praesent quis arcu lectus. Aliquam sed turpis lectus." << endl;
        archivoSalida << " " << endl;
        archivoSalida << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi dictum mattis augue, vel commodo risus eleifend in. Sed vitae mi rhoncus metus ornare molestie eget sed diam. Praesent maximus feugiat lorem sed lacinia. Fusce et justo accumsan, varius nisl eu, gravida ante. Donec sit amet nibh eros. Phasellus tincidunt libero posuere ex suscipit, sit amet tempor sapien placerat. Sed posuere turpis eu massa auctor, id dictum lectus sodales. Donec volutpat ipsum quis nunc posuere, nec elementum tortor sagittis. Praesent at augue at magna euismod elementum." << endl;
        archivoSalida << " " << endl;
        archivoSalida << "Nullam ultricies pharetra sapien, ac iaculis leo finibus sed. Integer congue ante nisi, eu elementum velit ultricies eget. Nam et volutpat elit, sed posuere mauris. Nullam ultricies neque lorem, vel blandit sapien facilisis vel. Suspendisse nec nisi auctor, egestas tellus quis, ultricies odio. In tincidunt ante maximus, aliquet metus vestibulum, porttitor sapien. Cras posuere quis enim vel vehicula. Vestibulum elementum lorem sit amet elit varius semper. Nunc sapien nisl, iaculis ac." << endl;
        archivoSalida << " " << endl;
    }
    void reemplazar(string a, string b)
    {
        {
            ifstream archivoSalida(lorem.txt);
            ofstream archivoEntrada(reemplazado.txt);
            string texto;

            if (!archivoSalida.is_open() || !archivaEntrada.is_open())
            {
                cout << "Error al abrir archivos." << endl;
                return;
            }

            while (getline(lorem, reemp))
            {
                size_t pos = lorem.find(a);
                while (pos != string::npos)
                {
                    reemp.replace(pos, a.length(), b);
                    pos = reemp.find(a, pos + b.length());
                }
                lorem << reemp << endl;
            }

            archivoSalida.close();
            aechivoEntrada.close();
        }
    }