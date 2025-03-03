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

    void MostrarUsuario();
    void MostrarAmigos();
    void AgregarAmigo(Usuario *u);
};