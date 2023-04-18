#include <iostream>
void primerparcial();
void menu();
void primeratarea();
void segundatarea();
void terceratarea();
void eleccej();//Ciclo eleccion de tarea
void ej1();//Ejercicio 1 Tarea
void ej2();//Ejercicio 2 Tarea
void ej3();//Ejercicio 3 Tarea
void ej4();//Ejercicio 4 Tarea
void ej5();//Ejercicio 5 Tarea

using namespace std;

void primerparcial()
{
    menu();
}
void menu()
{
    int elecctar;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cout << endl << "Bienvenido a las tareas del primer parcial." << endl;
        cout << "Tiene tres opciones para elegir." << endl;
        cout << "1- Primera tarea." << endl;
        cout << "2- Segunda tarea." << endl;
        cout << "3- Tercera tarea." << endl;
        cout << "4- Salir." << endl;
        cin >> elecctar;
        switch (elecctar) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
            primeratarea();
            break;
        case 2:
            segundatarea();
            break;
        case 3:
            terceratarea();
            break;
        case 4:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (elecctar > 0 || elecctar < 3);
}
void primeratarea()
{
    int num = rand() % (101 - 1);
    int elecc;
    int mov = 0;
    cout << "Bienvenido a Guess my number" << endl << endl << "Se va a generar un numero aleatorio entre 0 y 100 el cual debe adivinar para ganar" << endl;
    do
    {
        cin >> elecc;
        mov++;
        if (elecc == num)
            cout << "¡Felicidades, ganaste! Tu numero de intentos fue: " << mov << endl;
        else if (elecc > num)
            cout << "Es un número menor" << endl;
        else
            cout << "Es un número mayor" << endl;
    } while (elecc != num);
}
void segundatarea()
{
    int num = rand() % (101 - 1);
    int elecc;
    int mov{};
    cout << num << endl;
    cout << "Bienvenido a Guess my number" << endl << endl << "Se va a generar un numero aleatorio entre 0 y 100 el cual debe adivinar para ganar" << endl;
    do
    {
        cin >> elecc;
        mov++;
        if (elecc == num)
            cout << "Felicidades, ganaste! Tu numero de intentos fue: " << mov << endl;
        else if (elecc > num)
        {
            if (elecc > num && elecc <= num + 3)
                cout << "Es un numero menor, pero estas cerca" << endl;
            else if (elecc > num && elecc > num + 3)
                cout << "Es un numero menor, aunque estas lejos" << endl;
        }
        else
        {
            if (elecc < num && elecc >= num - 3)
                cout << "Es un numero mayor, pero estas cerca" << endl;
            else if (elecc < num && elecc < num - 3)
                cout << "Es un numero mayor, aunque estas lejos" << endl;
        }
    } while (elecc != num);
}
void terceratarea() 
{
    eleccej();
}
void eleccej()
{
    int eleccej;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cout << endl << "Bienvenido al menu de tareas." << endl;
        cout << "Tiene cinco opciones para elegir." << endl;
        cout << "1- Primer ejercicio." << endl;
        cout << "2- Segundo ejercicio." << endl;
        cout << "3- Tercero ejercicio." << endl;
        cout << "4- Cuarto ejercicio." << endl;
        cout << "5- Quinto ejercicio." << endl;
        cout << "6- Salir." << endl;
        cin >> eleccej;
        switch (eleccej) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
            ej1();
            break;
        case 2:
            ej2();
            break;
        case 3:
            ej3();
            break;
        case 4:
            ej4();
            break;
        case 5:
            ej5();
            break;
        case 6:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (eleccej > 0 || eleccej < 5);
}
void ej1()
{
    cout << "Tarea" << endl << "Primer ejercicio" << endl << "Ingresar un numero por consola y determinar si es negativo o positivo." << endl;
    float numazar;
    cin >> numazar;
    if (numazar < 0)
    {
        cout << "El numero es negativo." << endl;
    }
    else if (numazar > 0)
    {
        cout << "El numero es positivo." << endl;
    }
    else
    {
        cout << "El numero es cero." << endl;
    }
}
void ej2()
{
    cout << "Tarea" << endl << "Segundo ejercicio" << endl << "Pedir un numero de 2 digitos, imprimir la suma entre esos digitos." << endl;
    int a, b;
    int c, d;
    cin >> c;
    a = c / 10;
    b = c % 10;
    d = a + b;
    cout << "El resultado es: " << d << endl;
}
void ej3()
{
    int dosdigit;
    int x;
    int y;
    cout << "Tarea" << endl << "Tercer ejercicio" << endl << "Pedir un numero de 2 digitos, determinar si uno de ellos es par, e imprimir cual es." << endl;
    cin >> dosdigit;
    x = dosdigit % 10;
    y = dosdigit / 10;
    if (x % 2 == 0 && y % 2 == 0)
    {
        cout << "Ambos numeros son par" << endl;
    }
    else if (x % 2 == 0 && y % 2 != 0)
    {
        cout << "El numero: " << x << " es par" << endl;
    }
    else if (y % 2 == 0 && x % 2 != 0)
    {
        cout << "El numero: " << y << " es par" << endl;
    }
    else
    {
        cout << "Ningun numero es par" << endl;
    }
}
void ej4()
{
    cout << "Tarea" << endl << "Cuarto ejercicio" << endl << "Ingresar 3 numeros por consola y determinar el numero mas alto." << endl;
    int cantdigit, mayor = 0;
    cout << "Ingrese el numero de digitos que desea comparar" << endl;
    cin >> cantdigit;
    int* x;
    x = new int[cantdigit];
    for (int i = 0; i < cantdigit; i++)
    {
        cout << "Ingrese un digito" << endl;
        cin >> x[i];
        if (x[i] > x[i - 1])
        {
            mayor = x[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
}
void ej5()
{
    cout << "Tarea" << endl << "Cuarto ejercicio" << endl << "Ingresar 3 numeros por consola y determinar el numero mas alto." << endl;
    int nummen, nummay;
    cout << "Ingrese el rango menor." << endl;
    cin >> nummen;
    cout << "Ingrese el rango mayor." << endl;
    cin >> nummay;
    for (int i = nummen; i <= nummay; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}
