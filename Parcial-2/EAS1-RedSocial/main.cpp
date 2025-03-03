#include <iostream>
#include "RedSocial.hpp"
#include "Usuario.hpp"

int main()
{
    RedSocial *red = new RedSocial("Facebook");

    int opc = 0;

    while (opc != 5)
    {
        cout << "***** MENU *****" << endl;
        cout << "1) Mostrar Usuarios" << endl;
        cout << "2) Agregar Usuario" << endl;
        cout << "3) Hacer Amigos" << endl;
        cout << "4) Mostrar Amigos de un usuario" << endl;
        cout << "5) Guardar informacion" << endl;
        cout << "6) Salir" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
        {
            red->MostrarUsuarios();
            break;
        }

        case 2:
        {
            cout << "Ingresa el nombre del nuevo usuario" << endl;
            Usuario *u = new Usuario();
            cin >> u->nombre;

            red->AgregarUsuario(u);
            break;
        }

        case 3:
        {
            cout << "Ingresa los usuarios quieres hacer amigos: " << endl;
            for (int i = 0; i < red->usuarios.size(); i++)
            {
                cout << i << " - ";
                red->usuarios[i]->MostrarUsuario();
                cout << endl;
            }
            int x, y;
            cin >> x >> y;

            red->usuarios[x]->AgregarAmigo(red->usuarios[y]);
            break;
        }

        case 4:
        {
            cout << "Ingresa el usuario del que quieres ver los amigos: " << endl;
            for (int i = 0; i < red->usuarios.size(); i++)
            {
                cout << i << " - ";
                red->usuarios[i]->MostrarUsuario();
                cout << endl;
            }
            int x;
            cin >> x;

            red->usuarios[x]->MostrarUsuario();
            red->usuarios[x]->MostrarAmigos();

            break;
        }

        case 5:
        {
            red->guardarInformacion();
            break;
        }

        case 6:
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