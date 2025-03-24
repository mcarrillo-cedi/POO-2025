#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
int main()
{
    ofstream ArchivoSalida("Texto.txt");
    ArchivoSalida << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas felis massa, vestibulum nec ex vel, venenatis sagittis lectus. Duis urna ante, dictum eget varius pharetra, volutpat eu elit. Pellentesque eleifend turpis nisi, vitae dignissim nunc ultricies nec. Aenean iaculis augue congue, placerat velit sed, tincidunt metus. Curabitur ante risus, scelerisque vitae velit sit amet, euismod placerat justo. Donec commodo pharetra sapien, sollicitudin semper odio elementum eu. Pellentesque in libero tempor, semper velit ut, interdum metus. Quisque vel elit at justo consequat dignissim. Duis dui sapien, viverra et tincidunt quis, aliquam id orci. Sed vel arcu sed nisi elementum tincidunt et nec nisi. Mauris mauris diam, aliquam eget urna quis, iaculis scelerisque odio. Morbi a arcu ac sem tristique consectetur non sit amet mauris. Curabitur non nisi quis elit iaculis scelerisque. Suspendisse ultricies aliquam nunc. Donec ut dolor ut est tempor feugiat. Morbi dictum nec metus nec porta." << endl;
    ArchivoSalida << "In suscipit lacus vitae orci tincidunt mollis. Suspendisse euismod est lacus. Cras pharetra dignissim augue ornare ultrices. Pellentesque non lorem nec lacus egestas rutrum. Duis eget odio purus. Sed posuere sagittis pharetra. Mauris nisi elit, sagittis at lacus at, porttitor scelerisque erat. Nam laoreet vehicula semper. Morbi non sem odio. Mauris vulputate lacus ac diam imperdiet egestas. Vestibulum massa turpis, imperdiet vel pulvinar at, volutpat ut augue. Cras consectetur et velit in efficitur. Phasellus eu ligula nec arcu hendrerit semper. Praesent consequat velit mattis libero cursus ornare. Ut eu lorem elit. Sed velit velit, hendrerit sit amet dolor ut, pharetra laoreet neque." << endl;
    ArchivoSalida << "Curabitur interdum justo dolor, eu sagittis lorem rutrum ac. Praesent tortor leo, vestibulum viverra porta quis, ultricies a diam. Curabitur quis neque molestie sem condimentum lacinia non ut nisl. Suspendisse aliquet nunc vitae turpis ultrices tincidunt. Donec a sodales nibh. Aenean mollis cursus nisi, eu suscipit ligula tristique eget. Pellentesque quis tellus rutrum, porta lectus sed, malesuada dui. Quisque imperdiet ipsum sed leo bibendum, id commodo urna rutrum. Donec vel condimentum ante. In eget ex rhoncus est dictum molestie. Curabitur a magna nunc. Curabitur quis convallis urna. Praesent quis arcu lectus. Aliquam sed turpis lectus." << endl;
    ArchivoSalida << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi dictum mattis augue, vel commodo risus eleifend in. Sed vitae mi rhoncus metus ornare molestie eget sed diam. Praesent maximus feugiat lorem sed lacinia. Fusce et justo accumsan, varius nisl eu, gravida ante. Donec sit amet nibh eros. Phasellus tincidunt libero posuere ex suscipit, sit amet tempor sapien placerat. Sed posuere turpis eu massa auctor, id dictum lectus sodales. Donec volutpat ipsum quis nunc posuere, nec elementum tortor sagittis. Praesent at augue at magna euismod elementum." << endl;
    ArchivoSalida << "Nullam ultricies pharetra sapien, ac iaculis leo finibus sed. Integer congue ante nisi, eu elementum velit ultricies eget. Nam et volutpat elit, sed posuere mauris. Nullam ultricies neque lorem, vel blandit sapien facilisis vel. Suspendisse nec nisi auctor, egestas tellus quis, ultricies odio. In tincidunt ante maximus, aliquet metus vestibulum, porttitor sapien. Cras posuere quis enim vel vehicula. Vestibulum elementum lorem sit amet elit varius semper. Nunc sapien nisl, iaculis ac." << endl;
    ifstream ArchivoEntrada("Texto.txt");
    int n = 0;
    int n2 = 0;
    string texto;
    string texto2;
    string texto3;
    string palabra;
    while (ArchivoEntrada >> texto)
    {
        getline(ArchivoEntrada, texto);
        n++;
    }
    cout << "Lineas: " << n << endl;
    while (ArchivoEntrada >> texto)
    {
        n2++;
    }
    cout << "Palabras: " << n2 << endl;

    ofstream Copia("Copia.txt");
    while (ArchivoEntrada >> texto2)
    {
        getline(ArchivoEntrada, texto2);
        Copia << texto2 << endl;
    }
    cout << "ingresa la palabra que vas a reemplazar" << endl;
    cin >> palabra;
    while (ArchivoEntrada >> texto3)
    {
        if (texto3 == palabra)
        {
            ofstream reemplazo("reemplazo.txt");
        }
    }

    ArchivoEntrada.close();
}
