#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <locale>
void segundoparcial();
void menu2();
//
void primeratarea2();
void piedrapapeltijera();
void juego();
void revancha();
void salir();
//
void Ejemplopuntero();
void ejerciciovector();
void Ejemplopuntero2();
void Ejemplopuntero3();
void Ejemploiterador();
void Guessword();
void Hangman();
//
void parametro();
void badswap(int x, int y);
void goodswap(int& x, int& y);
//
void cincomin();
void display(const vector<string>& vec);
//
void examencorregido();
string GetRandomItem(vector<string>& items);
void DisplayInventory(vector<string>& inventory);
bool AskYesNo(string question);
void showMenu();
int askNumber(string question, int high, int low);

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
        cout << endl << "Bienvenido a las tareas del segundo parcial." << endl;
        cout << "Tiene diez opciones para elegir." << endl;
        cout << "1- Primera tarea. Piedra, papel o tijera." << endl;
        cout << "2- Ejemplo puntero." << endl;
        cout << "3- Ejemplo de puntero dos." << endl;
        cout << "4- Ejemplo de puntero tres." << endl;
        cout << "5- Ejemplo iterador." << endl;
        cout << "6- Segunda tarea. Guess the word." << endl;
        cout << "7- Tercera tarea. Hangman." << endl;
        cout << "8- Ejercicio funcion con parametros" << endl;
        cout << "9- Funcion display." << endl;
        cout << "10- Examen corregido" << endl;
        cout << "11- Salir." << endl;
        cin >> elecctar2;
        switch (elecctar2) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
            primeratarea2();
            break;
        case 2:
            Ejemplopuntero();
            break;
        case 3:
            Ejemplopuntero2();
            break;
        case 4:
            Ejemplopuntero3();
            break;
        case 5:
            Ejemploiterador();
            break;
        case 6:
            Guessword();
            break;
        case 7:
            Hangman();
            break;
        case 8:
            parametro();
            break;
        case 9:
            cincomin();
            break;
        case 10:
            examencorregido();
            break;
        case 11:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (elecctar2 > 0 || elecctar2 < 10);
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
//
void Ejemplopuntero()
{
    //vector <string> myStuff = {"espada", "martillo", "bomba"};
    //vector <string> inventory(10);
    //vector <string> inventory(10, "Vacio");
    //vector <string> inventory(myStuff);

    vector <string> inventory;

    inventory.push_back("espada");
    inventory.push_back("escudo");
    inventory.push_back("martillo");

    cout << "Tienes " << inventory.size() << " items de tu inventario" << endl;

    for (unsigned int i = 0; i < inventory.size(); i++) // Iteration for
    {
        cout << inventory[i] << endl;
    }

    cout << "Cambiaste tu " << inventory[0] << " por una bomba.";
    inventory[0] = "Bomba";

    cout << endl;

    int i = 0;
    do // Iteration do-while
    {
        cout << inventory[i] << endl;
        i++;
    } while (i < inventory.size());

    cout << inventory[0] << " tiene " << inventory[0].size() << " letras en el. ";
    cout << " Perdiste un item la ultima batalla " << endl;

    inventory.pop_back(); // Delete item from vector

    for (unsigned int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "Un enemigo ha robado todas tus armas" << endl; // inventory.clear();

    if (inventory.empty())
    {
        cout << "No tienes nada" << endl;
    }
    else
    {
        for (unsigned int i = 0; i < inventory.size(); i++)
        {
            cout << inventory[i] << endl;
        }
    }

}
void ejerciciovector()
{
    int mochila = 0;
    cout << "Escriba la cantidad de espacios que desea que tenga su mochila" << endl;
    cin >> mochila;
    if (mochila > 15)
    {
        cout << "Es mucho espacio para un arma." << endl;
    }
    else if (mochila <= 0)
    {
        cout << "Es poco espacio para un arma." << endl;
    }

    vector <string> inventory(mochila);
}// Falta terminar
void Ejemplopuntero2()
{
    const int NUM_SCORES = 4;
    int score;

    vector<int>::const_iterator iter;
    vector<int> scores;

    for (int i = 0; i < NUM_SCORES; i++)
    {
        cout << "Score " << i + 1 << endl;
        cin >> score;
        scores.push_back(score);
    }

    cout << "Puntajes" << endl;
    
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    /*Find*/
    cout << "Buscar puntajes" << endl;
    cin >> score;

    iter = find(scores.begin(), scores.end(), score);

    if (iter != scores.end())
    {
        cout << "Tu puntaje se encuentra en el vector" << endl;
    }
    else
    {
        cout << "No encontramos el puntaje que buscas" << endl;
    }

    /*Random Shuffle*/
    srand(time(NULL));
    random_shuffle(scores.begin(), scores.end());
    cout << "Scores mezclados" << endl;
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    // Shuffle String
    string word = "perro";
    random_shuffle(word.begin(), word.end());
    cout << word << endl;

    /*Sort*/
    cout << "Cambiar orden" << endl;
    sort(scores.begin(), scores.end());
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }

    cout << "Cambiar orden greater" << endl;
    sort(scores.begin(), scores.end(), greater<int>());
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << endl;
    }
}
void Ejemplopuntero3() // eso es el tema de reservas
{
    vector<int> scores(10, 0);
    cout << "Vector size is: " << scores.size() << endl;
    cout << "Vector capacity is: " << scores.capacity() << endl;
    scores.reserve(20);
    scores.push_back(0);
    cout << "Vector size is: " << scores.size() << endl;
    cout << "Vector capacity is: " << scores.capacity() << endl;

    scores.push_back(3);
    cout << "Vector size is: " << scores.size() << endl;
    cout << "Vector capacity is: " << scores.capacity() << endl;
}
void Ejemploiterador()
{
    vector <string> inventory;
    inventory.push_back("Espada");
    inventory.push_back("Escudo");
    inventory.push_back("Martillo");
    inventory.push_back("Rifle");

    vector <string>::iterator myIterator; // Cambiar datos del vector solo iterator
    vector <string>::const_iterator iter; // Iterador solo para ver datos

    cout << "Tus items: " << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    // Intercambio
    cout << "Intercambiaste tu " << inventory[2] << " por un arco" << endl;
    myIterator = inventory.begin() + 2;
    *myIterator = "Arco";
    cout << "Tus items: " << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    // Size
    cout << "El nombre del item " << *myIterator << " tiene " << (myIterator)->size() << " letras" << endl;

    //Insert
    cout << "Recuperaste la bomba robada " << endl;
    inventory.insert(inventory.begin() + 2, "Bomba");
    cout << "Tus items: " << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }

    //Delete
    cout << "Tu " << inventory[1] << " fue destruido en batalla" << endl;
    inventory.erase(inventory.begin() + 1);
    cout << "Tus items: " << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
}
void Guessword()
{
    const int MAX_ATTEMPTS = 3;
    int attempts = 0;

    vector<string> words;
    words.push_back("COMPUTADORA");
    words.push_back("JUEGO");
    words.push_back("CODIGO");
    words.push_back("REFRIGERADOR");

    srand(time(NULL));
    int randomNumber = rand();
    int wordsRandomIndex = (randomNumber % words.size());
    string wordSelected = words[wordsRandomIndex];

    //cout << wordSelected << endl;

    random_shuffle(wordSelected.begin(), wordSelected.end());
    cout << wordSelected << endl;

    string correctWord;

    do
    {
        cin >> correctWord;
        transform(correctWord.begin(), correctWord.end(), correctWord.begin(), ::toupper);
        //cout << correctWord << endl;

        if (correctWord == words[wordsRandomIndex])
        {
            attempts++;
            cout << "\nAdivinaste la palabra!!!\n";
            break;
        }
        else
        {
            attempts++;
            cout << "Fallaste humano inepto, te quedan " << MAX_ATTEMPTS - attempts << endl;
        }

    } while (attempts != MAX_ATTEMPTS);

    if (attempts == MAX_ATTEMPTS)
    {
        cout << "\nPerdiste, date de baja, la palabra era:  \n";
        cout << words[wordsRandomIndex];
    }
    else
    {
        cout << "\nMUY BIEN!! lo hiciste en: " << attempts << " intentos.";
    }
}
void Hangman()
{
    int vidas = 6;

    vector <string> words;
    words.push_back("REPTIL");
    words.push_back("JUPITER");
    words.push_back("VIOLETA");
    words.push_back("BALLENA");
    words.push_back("IGLESIA");
    words.push_back("MAGIA");
    words.push_back("CIUDAD");
    words.push_back("GALEON");
    words.push_back("lEON");
    words.push_back("BORREGO");
    words.push_back("CASTROSO");
    words.push_back("DIABLO");
    words.push_back("CUERVO");
    words.push_back("BRUJA");
    words.push_back("MOTOSIERRA");
    words.push_back("COBARDE");
    words.push_back("HAMSTER");
    words.push_back("CLON");
    words.push_back("DOCTORA");
    words.push_back("PASTE");
    words.push_back("BOREAL");
    words.push_back("EMPERADOR");
    words.push_back("ENANO");
    words.push_back("LUNA");
    words.push_back("CARRO");
    words.push_back("DONA");
    words.push_back("PASTEL");
    words.push_back("PRESIDENTE");
    words.push_back("DISFRAZ");

    srand(time(NULL));
    int randomNumber = rand();
    int wordsRandomIndex = (randomNumber % words.size());
    string wordSelected = words[wordsRandomIndex];
    const string Word = wordSelected;

    string letrasfallidas;
    char letra;
    string soFar(Word.size(), '_');
    cout << "Bienvenido al ahorcado." << endl;
    cout << soFar << endl;
    cout << "Tienes que ingresar una letra para ir descubriendo la palabra." << endl;
    do
    {
        cout << "Ingresa una letra." << endl;
        cin >> letra;
        letra = toupper(letra);
        if (letra == '0' || letra == '1' || letra == '2' || letra == '3' || letra == '4' || letra == '5' || letra == '6' || letra == '7' || letra == '8' || letra == '9')
        {
            cout << "No se puede ingresar un numero, ingrese una letra" << endl;
        }
        else
        {
            if (Word.find(letra) != string::npos)
            {
                for (int i = 0; i < Word.length(); i++)
                {
                    if (Word[i] == letra)
                    {
                        soFar[i] = letra;
                    }
                }
                vidas = vidas;
                cout << soFar << endl;
            }
            else if (letrasfallidas.find(letra) == string::npos)
            {
                vidas = vidas - 1;
                letrasfallidas.push_back(letra);
                letra = ' ';
                cout << soFar << endl;
                cout << endl;
                cout << endl;
            }
            switch (vidas)
            {
            case 0:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << " o   |" << endl;
                cout << "|||  |" << endl;
                cout << " |   |" << endl;
                cout << "| |  |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Estas ahorcado. Has perdido." << endl;
                cout << "Vidas restantes: " << vidas << endl;
                cout << "La palabra era: " << Word << endl;
                break;
            case 1:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << " o   |" << endl;
                cout << "|||  |" << endl;
                cout << " |   |" << endl;
                cout << "|    |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Vidas restantes: " << vidas << endl;
                if (soFar == Word)
                {
                    cout << "Felicidades!!! Has ganado el juego!!!" << endl;
                }
                break;
                break;
            case 2:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << " o   |" << endl;
                cout << "|||  |" << endl;
                cout << " |   |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Vidas restantes: " << vidas << endl;
                if (soFar == Word)
                {
                    cout << "Felicidades!!! Has ganado el juego!!!" << endl;
                }
                break;
            case 3:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << " o   |" << endl;
                cout << "||   |" << endl;
                cout << " |   |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Vidas restantes: " << vidas << endl;
                if (soFar == Word)
                {
                    cout << "Felicidades!!! Has ganado el juego!!!" << endl;
                }
                break;
            case 4:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << " o   |" << endl;
                cout << " |   |" << endl;
                cout << " |   |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Vidas restantes: " << vidas << endl;
                if (soFar == Word)
                {
                    cout << "Felicidades!!! Has ganado el juego!!!" << endl;
                }
                break;
            case 5:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << " o   |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Vidas restantes: " << vidas << endl;
                if (soFar == Word)
                {
                    cout << "Felicidades!!! Has ganado el juego!!!" << endl;
                }
                break;
            case 6:
                cout << " +---+" << endl;
                cout << " |   |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "     |" << endl;
                cout << "======" << endl;
                cout << endl;
                cout << "Vidas restantes: " << vidas << endl;
                if (soFar == Word)
                {
                    cout << "Felicidades!!! Has ganado el juego!!!" << endl;
                }
                break;
            }
        }
    } while (vidas > 0 && soFar != Word);
}
//
void parametro()
{
    int score1 = 20;
    int score2 = 100;

    badswap(score1, score2);
    cout << "Puntaje 1: " << score1 << endl;
    cout << "Puntaje 2: " << score2 << endl;
    cout << endl;
    goodswap(score1, score2);
    cout << "Puntaje 1: " << score1 << endl;
    cout << "Puntaje 2: " << score2 << endl;
}
void badswap(int x, int y) 
{
    int aux = x; // aux = 20
    x = y; // x = 100
    y = aux; // y = 20
}
void goodswap(int& x, int& y)
{
    int aux = x; // aux = 20
    x = y; // x = 100
    y = aux; // y = 20
}
//
void cincomin()
{
    vector<string> inventory;

    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("gun");

    display(inventory);
}
void display(const vector<string>& vec)
{
    vector<string>::const_iterator iter;
    for (iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << endl;
    }
}
//
const int MAX_ITEMS = 6;
const int SPACE_COST = 6;
const int FREE_ITEMS = 3;
void examencorregido()
{
    std::setlocale(LC_ALL, "es_ES.UTF-8");
    unsigned int gems = 8;
    int reemplazo;

    // Items
    vector<string> items = { "espada", "martillo", "bomba", "escudo" };

    // inventory
    vector<string> inventory;
    inventory.reserve(MAX_ITEMS);
    vector<string>::const_iterator iter;
    bool isContinue;

    do
    {
        cout << "--INVENTARIO--" << endl;
        cout << "Gemas: " << gems << endl;
        string itemFound = GetRandomItem(items);

        cout << "Has encontrado un(a) " << itemFound << "!!" << endl;
        if (inventory.size() >= FREE_ITEMS)
        {
            showMenu();
            int option = askNumber("Elige un número entre: ", 3, 1);

            switch (option)
            {
            case 1:
                cout << "Elija el objeto que desea reemplazar " << endl;
                DisplayInventory(inventory);
                cin >> reemplazo;
                cout << endl;
                switch (reemplazo)
                {
                case 1:
                    inventory[0] = itemFound;
                    DisplayInventory(inventory);
                    break;
                case 2:
                    inventory[1] = itemFound;
                    DisplayInventory(inventory);
                    break;
                case 3:
                    inventory[2] = itemFound;
                    DisplayInventory(inventory);
                    break;
                default:
                    cout << "Elija el objeto que desea reemplazar " << endl;
                    break;
                }
                break;
            case 3:
                cout << "La cantidad " << endl;
                break;
            default:
                break;
            }
        }
        else
        {
            inventory.push_back(itemFound);
            DisplayInventory(inventory); // Display Items
        }
        isContinue = AskYesNo("Seguir explorando?");
    } while (isContinue);

    cout << "Vuelve pronto" << endl;
}
string GetRandomItem(vector<string>& items)
{
    srand(time(NULL));
    int itemRandomIndex = (rand() % items.size());
    string itemSelected = items[itemRandomIndex];

    return itemSelected;
}
void DisplayInventory(vector<string>& inventory)
{
    vector<string>::const_iterator iter;
    int i = 0;
    cout << "--Tus items--" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << i ++ << "_" << *iter << endl;
    }
}
bool AskYesNo(string question)
{
    char answer;
    do
    {
        cout << question << endl << "(y/n)";
        cin >> answer;
    } while (answer != 'y' && answer != 'n');
    if (answer == 'y')
    {
        return true;
    }
    return false;
}
void showMenu()
{
    cout << "Ya no tienes espacio, que te gutaria hacer?" << endl << "1- Reemplazar objeto" << endl << "2- Continuar sin recoger" << endl << "3- Comprar un espacio por " << SPACE_COST << " gemas" << endl;
}
int askNumber(string question, int high, int low)
{
    int number = 0;
    do
    {
        cout << question << "entre " << low << " y " << high << endl;
        cin >> number;
    } while (number > high || number < low);
    return number;
}