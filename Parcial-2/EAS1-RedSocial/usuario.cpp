#include "usuario.hpp"
#include <iostream>

using namespace std;

void Usuario::MostrarUsuario()
{
    cout << "Nombre: " << nombre << endl;
    cout << "# de Amigos: " << amigos.size() << endl;
}

void Usuario::MostrarAmigos()
{
    cout << "Amigos: " << endl;
    for (auto a : amigos)
    {
        cout << "   -";
        a->MostrarUsuario();
    }
}

void Usuario::AgregarAmigo(Usuario *u)
{
    amigos.push_back(u);
}