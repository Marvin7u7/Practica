#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Practica1.h"

void MenuPrimero(int);
void agregarCliente();
void Datosdelcliente();
void DatosdelHotel();

using namespace std;

void MenuPractica()
{
   system("cls");
   int Opc;
    cout<<"   Practica del Hotel     \n\n";
    cout<<" ===== MENU =====       \n";
    cout<<"| 1. Agregar Cliente    |\n";
    cout<<"| 2. Datos del  Clientes    |\n";
    cout<<"| 3. Datos del Hotel              |\n";
    cout<<"| 4. salir              |\n";
    cout<<" ----------------\n\n";
    cout<<"Opcion: ";
    cin>>Opc;
    fflush(stdin);
    fflush(stdout);

    switch(Opc)
    {

    case 1:

       agregarCliente();
        break;

    case 2:
        system("cls");
        cout<<"************ LIstas de usuarios  ****************"<<endl<<endl;
        Datosdelcliente();
        break;

    case 3:
        system("cls");
        DatosdelHotel();
        break;

    case 4:
        system("cls");
        MenuPractica();
        break;
    }
}
