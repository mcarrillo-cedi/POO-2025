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
        archivo << u->nombre << endl;
    archivo << "FIN" << endl;
    for (auto u : usuarios)
    {
        archivo << u->nombre << " " << u->amigos.size() << endl;
        for (auto a : u->amigos)
        {
            archivo << a->nombre << endl;
        }
    }
    archivo.close();
    cout << "Informacion guardada" << endl;
}

void RedSocial::cargarInformacion()
{
    ifstream archivo("usuarios.txt");
    archivo >> this->nombre;
    while (!archivo.eof())
    {
        string nombre;
        Usuario *u = new Usuario();
        archivo >> nombre;
        if (nombre == "FIN")
            break;
        u->nombre = nombre;
        usuarios.push_back(u);
    }
    while (!archivo.eof())
    {
        string nombre;
        int n;
        archivo >> nombre >> n;
        Usuario *u = nullptr;
        for (auto uu : usuarios)
        {
            if (uu->nombre == nombre)
            {
                u = uu;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            string nombreAmigo;
            archivo >> nombreAmigo;
            Usuario *a = nullptr;
            for (auto uu : usuarios)
            {
                if (uu->nombre == nombreAmigo)
                {
                    a = uu;
                    break;
                }
            }
            u->AgregarAmigo(a);
        }
    }
    archivo.close();
    cout << "Informacion cargada" << endl;
}