#include <iostream>
void segundoparcial();
void menu2();
void primeratarea2();
void piedrapapeltijera();
void juego();
void revancha();
void salir();

using namespace std;

void segundoparcial()
{
    menu2();
}
void menu2()
{
    int elecctar2;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cout << endl << "Bienvenido a las tareas del primer parcial." << endl;
        cout << "Tiene tres opciones para elegir." << endl;
        cout << "1- Primera tarea." << endl;
        cout << "2- Segunda tarea." << endl;
        cout << "3- Tercera tarea." << endl;
        cout << "4- Salir." << endl;
        cin >> elecctar2;
        switch (elecctar2) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
            primeratarea2();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (elecctar2 > 0 || elecctar2 < 3);
}
void primeratarea2()
{
    piedrapapeltijera();
}
void piedrapapeltijera()
{
    int eleccjueg;
    do
    {
        cout << "Bienvenido al menu." << endl;
        cout << "Tiene dos opciones para elegir." << endl;
        cout << "1- Jugar." << endl;
        cout << "2- Salir." << endl;
        cin >> eleccjueg;
        switch (eleccjueg)
        {
        case 1:
            juego();
            revancha();
            break;
        case 2:
            salir();
            break;
        default:
            cout << "Elija alguna de las dos opciones" << endl;
            break;
        }
    } while (eleccjueg > 0 || eleccjueg < 1);
}
void juego()
{
    int opcion;
    int jugador = 0;
    int maquina = 0;
    cout << "Bienvenido a Piedra, papel o tijera" << endl << endl << "1- Piedra." << endl << "2- Papel." << endl << "3- Tijera." << endl << "Elija alguna de las tres opciones anteriores" << endl;
    do
    {
        int numalea = rand();
        int num = numalea % (2) + 1;
        srand(time(NULL));
        cout << num << endl;
        cin >> opcion;
        if (opcion == 1 && num == 1)
        {
            cout << "Empate" << endl;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 1 && num == 2)
        {
            cout << "Maquina gana" << endl;
            maquina++;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 1 && num == 3)
        {
            cout << "Jugador gana" << endl;
            jugador++;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 2 && num == 1)
        {
            cout << "Jugador gana" << endl;
            jugador++;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 2 && num == 2)
        {
            cout << "Empate" << endl;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 2 && num == 3)
        {
            cout << "Maquina gana" << endl;
            maquina++;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 3 && num == 1)
        {
            cout << "Maquina gana" << endl;
            maquina++;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 3 && num == 2)
        {
            cout << "Jugador gana" << endl;
            jugador++;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else if (opcion == 3 && num == 3)
        {
            cout << "Empate" << endl;
            cout << "Puntuacion maquina: " << maquina << " Puntuacion jugador: " << jugador << endl;
        }
        else
        {
            cout << "Elija un numero del 1 al 3" << endl;
        }
    } while (jugador < 2 && maquina < 2);
}
void revancha()
{
    int jugar2;
    cout << "Quiere jugar de nuevo?" << endl << "1- Si" << endl << "2- No" << endl;
    cin >> jugar2;
    if (jugar2 == 1)
    {
        system("cls");
        juego();
    }
    else if (jugar2 == 2)
    {
        system("cls");
        menu();
    }
    else
    {
        cout << "Elija alguna de las dos opciones" << endl;
    }
}
void salir()
{
    int sal;
    cout << "Realmente quieres salir?" << endl;
    cout << "1- Si" << endl << "2- No" << endl;
    cin >> sal;
    if (sal == 1)
    {
        exit(EXIT_SUCCESS);
    }
    else if (sal == 2)
    {
        menu();
    }
    else
    {
        cout << "Elija alguna de las dos opciones" << endl;
    }
}