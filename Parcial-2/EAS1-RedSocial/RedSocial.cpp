#include "RedSocial.hpp"
#include "Usuario.hpp"
#include <iostream>
#include <fstream>
using namespace std;

using namespace std;

RedSocial::~RedSocial()
{
    for (Usuario *u : usuarios)
        delete u;
}

void RedSocial::MostrarUsuarios()
{
    for (auto u : usuarios)
    {
        u->MostrarUsuario();
    }
}

void RedSocial::AgregarUsuario(Usuario *u)
{
    usuarios.push_back(u);
}

void RedSocial::guardarInformacion()
{
    ofstream archivo("usuarios.txt");
    archivo << this->nombre << endl;
    for (auto u : usuarios)
    {
        archivo << u->nombre << " " << u->amigos.size() << endl;
        for (auto a : u->amigos)
        {
            archivo << a->nombre << endl;
        }
    }
    archivo.close();
}