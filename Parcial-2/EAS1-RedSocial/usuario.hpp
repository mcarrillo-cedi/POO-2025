#pragma once

#include <string>
#include <vector>
using namespace std;

class Usuario
{
public:
    string nombre;
    vector<Usuario *> amigos;

    Usuario() : nombre("") {};
    Usuario(string nom) : nombre(nom) {}

    void mostrarUsuario();
    void mostrarAmigos();
    void agregarAmigo(Usuario *u);
};