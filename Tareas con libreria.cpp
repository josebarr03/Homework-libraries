#include <iostream>
#include "C:\Users\josep\OneDrive\Documentos\Trabajos\Tareas con libreria\Tareas primer parcial.h"
#include "C:\Users\josep\OneDrive\Documentos\Trabajos\Tareas con libreria\Tareas segundo parcial.h"

using namespace std;

void ciclo();//Ciclo eleccion de parcial

int main()
{
    ciclo();
}

void ciclo()
{
    int eleccmen;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cout << endl << "Bienvenido al menu de tareas." << endl;
        cout << "Tiene cuatro opciones para elegir." << endl;
        cout << "1- Primer parcial." << endl;
        cout << "2- Segundo parcial." << endl;
        cout << "3- Tercer parcial." << endl;
        cout << "4- Cuarto parcial." << endl;
        cout << "5- Salir." << endl;
        cin >> eleccmen;
        switch (eleccmen) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
            primerparcial();
            break;
        case 2:
            segundoparcial();
            break;
        case 3:
            cout << "3 tarea." << endl;
            break;
        case 4:
            cout << "4 tarea." << endl;
            break;
        case 5:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (eleccmen > 0 || eleccmen < 4);
}