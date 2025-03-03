#include <iostream>
#include "RedSocial.hpp"
#include "Usuario.hpp"

int main()
{
    RedSocial *red = new RedSocial("Facebook");

    red->agregarUsuario(new Usuario("Juan"));
    red->agregarUsuario(new Usuario("Pedro"));
    red->agregarUsuario(new Usuario("Maria"));

    int opc = 0;

    while (opc != 5)
    {
        cout << "***** MENU *****" << endl;
        cout << "1) Mostrar Usuarios" << endl;
        cout << "2) Agregar Usuario" << endl;
        cout << "3) Hacer Amigos" << endl;
        cout << "4) Mostrar Amigos de un usuario" << endl;
        cout << "5) Salir" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
        {
            red->mostrarUsuarios();
            break;
        }

        case 2:
        {
            cout << "Ingresa el nombre del nuevo usuario" << endl;
            Usuario *u = new Usuario();
            cin >> u->nombre;

            red->agregarUsuario(u);
            break;
        }

        case 3:
        {
            cout << "Ingresa los usuarios quieres hacer amigos: " << endl;
            for (int i = 0; i < red->usuarios.size(); i++)
            {
                cout << i << " - ";
                red->usuarios[i]->mostrarUsuario();
                cout << endl;
            }
            int x, y;
            cin >> x >> y;

            red->usuarios[x]->agregarAmigo(red->usuarios[y]);
            red->usuarios[y]->agregarAmigo(red->usuarios[x]);
            break;
        }

        case 4:
        {
            cout << "Ingresa el usuario del que quieres ver los amigos: " << endl;
            for (int i = 0; i < red->usuarios.size(); i++)
            {
                cout << i << " - ";
                red->usuarios[i]->mostrarUsuario();
                cout << endl;
            }
            int x;
            cin >> x;

            red->usuarios[x]->mostrarUsuario();
            red->usuarios[x]->mostrarAmigos();

            break;
        }

        case 5:
        {
            delete red;
            break;
        }

        default:
            cout << "Opción no válida" << endl;
            break;
        }
    }

    return 0;
}