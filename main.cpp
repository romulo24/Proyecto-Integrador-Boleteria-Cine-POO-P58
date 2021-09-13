#include <iostream>
#include "cine.h"

using namespace std;

int main()
{
    system("color 0B");
    cout << "\n- - MI CINE - -" << endl << endl;
    Cine cine;

    int opc;
    do{

        cout << "+ + MENU PRINCIPAL + +" << endl;
        cout << "1. Mostrar Cartelera" << endl;
        cout << "2. Mostrar Sala" << endl;
        cout << "3. Comprar Boletos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion:" << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            cine.mostrarCartelera();
            break;
        case 2:
            /*cine.mostrarSala();*/
            break;
        case 3:
            /*cine.comprarBoletos();*/
            break;
        case 4:
            cout << "\nGracias por visitar mi CINE te esperamos pronto" << endl << endl;
            break;
        default:
            cout << "\nSr client@ ingrese una opcion valida" << endl << endl;
            break;
        }
    }while(opc!=4);
    return 0;
}
