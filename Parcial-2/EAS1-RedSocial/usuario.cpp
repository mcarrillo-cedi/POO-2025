#include "usuario.hpp"
#include <iostream>

using namespace std;

void Usuario::mostrarUsuario()
{
    cout << "Nombre: " << nombre << endl;
    cout << "# de Amigos: " << amigos.size() << endl;
}

void Usuario::mostrarAmigos()
{
    cout << "Amigos: " << endl;
    for (auto a : amigos)
    {
        cout << "   -" << a->nombre << endl;
    }
}

void Usuario::agregarAmigo(Usuario *u)
{
    amigos.push_back(u);
}