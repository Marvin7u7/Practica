///DESDE 0
///PRIMERAMENTE PONEN LAS BIBLIOTECAS QUE CONOCEN PRINCIPALMENTE TODAS
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
///Toda libreria propia  se llama con ""
#include "Practica1.h"

//Creacion del menu

void MenuPractica();

using namespace std;

int MenuPrincipal(int);

int main()
{
    int OP;
    do
    {
        switch(MenuPrincipal(OP))
        {
        case 1:
        {
            system("cls");
            MenuPractica();
            break;
        while(OP!=2);
        return 0;
}

int MenuPrincipal(int opc)
{
    cout<<"  Nombre de Proyecto \n\n";
    cout<<" ===== MENU =====\n";
    cout<<"| 1. Clientes    |\n";
    cout<<"| 2. Salir       |\n";
    cout<<" ----------------\n\n";
    cout<<"Opcion: ";
    cin>>Opc;
    fflush(stdin);
    fflush(stdout);

    return Opc;
}
