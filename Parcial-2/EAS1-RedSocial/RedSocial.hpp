#pragma once

#include <string>
#include <vector>
#include "usuario.hpp"
using namespace std;

class RedSocial
{
public:
    string nombre;
    vector<Usuario *> usuarios;

    RedSocial(string nom) : nombre(nom) {}
    ~RedSocial();

    void MostrarUsuarios();
    void AgregarUsuario(Usuario *u);
    void guardarInformacion();
    void cargarInformacion();
};