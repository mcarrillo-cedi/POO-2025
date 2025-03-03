#include "RedSocial.hpp"
#include "Usuario.hpp"
#include <iostream>

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