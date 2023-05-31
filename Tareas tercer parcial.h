#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
void tercerparcial();
void menu3();
void anidados();
void anidadoscaja();
void anidadosdiagonal();
void anidadostacha();
void tictactoe();
//
void tictactoepractica();

using namespace std;

void tercerparcial()
{
    menu3();
}
void menu3()
{
    int elecctar2;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cout << endl << "Bienvenido a las tareas del tercer parcial." << endl;
        cout << "Tiene diez opciones para elegir." << endl;
        cout << "1- Anidados." << endl;
        cout << "2- Anidados caja." << endl;
        cout << "3- Anidados diagonal." << endl;
        cout << "4- Anidados tacha" << endl;
        cout << "5- TIC TAC TOE ejemplo" << endl;
        cout << "6- TIC TAC TOE practica" << endl;
        cout << "7- " << endl;
        cout << "8- " << endl;
        cout << "9- " << endl;
        cout << "10- Salir." << endl;
        cin >> elecctar2;
        cout << endl;
        switch (elecctar2) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
            anidados();
            break;
        case 2:
            anidadoscaja();
            break;
        case 3:
            anidadosdiagonal();
            break;
        case 4:
            anidadostacha();
            break;
        case 5:
            tictactoe();
            break;
        case 6:
            tictactoepractica();
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (elecctar2 > 0 || elecctar2 < 10);
}
void anidados()
{
    const int ROWS = 5;
    const int COLUMNS = 5;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << " 0 ";
        }
        cout << endl;
    }
}
void anidadoscaja()
{
    const int ROWS = 5;
    const int COLUMNS = 5;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (i == 0 || j == 0 || i == (ROWS - 1) || j == (COLUMNS - 1))
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}
void anidadosdiagonal()
{
    const int ROWS = 5;
    const int COLUMNS = 5;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (i == 0 || j == 0 || i == (ROWS - 1) || j == (COLUMNS - 1) || i == j)
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}
void anidadostacha()
{
    const int HIGHT_WIDTH = 6;

    for (int i = 0; i < HIGHT_WIDTH; i++)
    {
        for (int j = 0; j < HIGHT_WIDTH; j++)
        {
            int sumij = i + j;
            if (i == 0 || j == 0 || i == (HIGHT_WIDTH - 1) || j == (HIGHT_WIDTH - 1) || i == j || sumij == (HIGHT_WIDTH - 1))
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}
void tictactoe()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = { {'O', 'x', 'O'},
                                  {' ', 'x', 'x'},
                                  {'x', 'O', 'O'} };

    cout << "---TIC TAC TOE---" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }

    board[1][1] = 'O';

    cout << "---TIC TAC TOE---" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }

    cout << "O wins!!" << endl;
}
//
void tictactoepractica()
{
    const int ROWS = 3; // Declaracion entero constante del numero filas
    const int COLUMNS = 3; // Declaracion entero constante del numero columnas
    string board[ROWS][COLUMNS] = { {" 0 ", " 1 ", " 2 "},
                                    {" 3 ", " 4 ", " 5 "},
                                    {" 6 ", " 7 ", " 8 "} }; // Matriz
    int empezar; // Declaracion variable entera para decidir que jugador va a comenzar
    int colocacion; // Declaracion entero donde se quiere colocar el caracter
    bool validacion1; // Declaracion de variable booleana para una validacion
    cout << "Bienvenido a TIC TAC TOE" << endl << "El jugador 1 usara el caracter X y el jugador 2 el caracter O" << endl << endl;
    cout << "Quien va a empezar?" << endl << "1- Jugador" << endl << "2- Jugador 2" << endl;
    cin >> empezar; // Se pide un dato entero donde se escoge el jugador que comienza
    cout << endl;
    if (empezar == 1) // if por si se decide que va a empezar el jugador uno (X)
    {
        cout << "A continuacion se le va a mostrar el tablero" << endl << endl;
        for (int i = 0; i < ROWS; i++) // ciclo for para crear la tabla donde posteriormente se pondran caracteres
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                cout << board[i][j];
            }
            cout << endl << endl;
        }
        do // ciclo do-while que se va a repetir para que los jugadores coloquen los caracteres en todos los espacios
        {
            cout << "Jugador numero 1 (X), en donde desea agregar la X?" << endl;
            do
            {
                cin >> colocacion; // Se le pide al jugador uno la ubicacion donde quiere poner su caracter
                cout << endl;
                switch (colocacion)
                {
                case 0:
                    if (board[0][0] == " X " || board[0][0] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[0][0] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 1:
                    if (board[0][1] == " X " || board[0][1] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[0][1] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 2:
                    if (board[0][2] == " X " || board[0][2] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[0][2] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 3:
                    if (board[1][0] == " X " || board[1][0] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[1][0] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 4:
                    if (board[1][1] == " X " || board[1][1] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[1][1] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 5:
                    if (board[1][2] == " X " || board[1][2] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[1][2] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 6:
                    if (board[2][0] == " X " || board[2][0] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[2][0] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 7:
                    if (board[2][1] == " X " || board[2][1] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[2][1] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 8:
                    if (board[2][2] == " X " || board[2][2] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[2][2] = " X ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                default:
                    validacion1 = false;
                    cout << "Elija algun numero que se da a elegir" << endl;
                    break;
                }
            } while (validacion1 == false);
            //
            cout << "Jugador numero 2 (O), en donde desea agregar la O?" << endl;
            do
            {
                cin >> colocacion; // Se le pide al jugador uno la ubicacion donde quiere poner su caracter
                cout << endl;
                switch (colocacion)
                {
                case 0:
                    if (board[0][0] == " X " || board[0][0] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[0][0] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 1:
                    if (board[0][1] == " X " || board[0][1] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[0][1] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 2:
                    if (board[0][2] == " X " || board[0][2] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[0][2] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 3:
                    if (board[1][0] == " X " || board[1][0] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[1][0] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 4:
                    if (board[1][1] == " X " || board[1][1] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[1][1] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 5:
                    if (board[1][2] == " X " || board[1][2] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[1][2] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 6:
                    if (board[2][0] == " X " || board[2][0] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[2][0] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 7:
                    if (board[2][1] == " X " || board[2][1] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[2][1] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                case 8:
                    if (board[2][2] == " X " || board[2][2] == " O ")
                    {
                        validacion1 = false;
                        cout << "Ese espacio ya está ocupado" << endl;
                    }
                    else
                    {
                        validacion1 = true;
                        board[2][2] = " O ";
                        for (int i = 0; i < ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS; j++)
                            {
                                cout << board[i][j];
                            }
                            cout << endl << endl;
                        }
                    }
                    break;
                default:
                    validacion1 = false;
                    cout << "Elija algun numero que se da a elegir" << endl;
                    break;
                }
            } while (validacion1 == false);
        } while (colocacion > 0 || colocacion < 9);
    }
}