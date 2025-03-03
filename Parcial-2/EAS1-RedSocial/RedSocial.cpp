#include "RedSocial.hpp"
#include "Usuario.hpp"
#include <iostream>

using namespace std;

RedSocial::~RedSocial()
{
    for (Usuario *u : usuarios)
        delete u;
}

void RedSocial::mostrarUsuarios()
{
    for (auto u : usuarios)
    {
        u->mostrarUsuario();
    }
}

void RedSocial::agregarUsuario(Usuario *u)
{
    usuarios.push_back(u);
}