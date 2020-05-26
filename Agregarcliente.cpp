#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include "Practica1.h"

using namespace std;


void AgregarCliente()
{
    Cliente cliente1;
    ofstream datos;
    datos.open("clientes.txt",ios::app); //Abre el archivo en modo de edición

    cout<<"Nuevo Registro de cliente"<<endl;
    cout<<"Cedula: ";
    gets(cliente1.Cedula);
    fflush(stdin);

    cout<<"Nombre: ";
    gets(cliente1.Nombre);
    fflush(stdin);

    cout<<"Telefono: ";
    gets(cliente1.Telefono);
    fflush(stdin);

    cout<<"Direccion: ";
    gets(cliente1.Direccion);
    fflush(stdin);

    cout<<"Correo: ";
    gets(cliente1.Correo);
    fflush(stdin);

    fflush(stdout);

    datos<<cliente1.Cedula<<endl;
    datos<<cliente1.Nombre<<endl;
    datos<<cliente1.Telefono<<endl;
    datos<<cliente1.Direccion<<endl;
    datos<<cliente1.Correo<<endl;

    datos.close();
}

void Datosdelcliente()
{
    // 1 - Abrir el archivo
    // 2 - Leer el archivo
    // 3 - Mostrar el contenido del archivo

    ifstream lectura;
    string texto;

    lectura.open("clientes.txt", ios::in);

    if(lectura.fail())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    while(!lectura.eof())
    {
        getline(lectura, texto);
        cout<<texto<<endl;
    }

    lectura.close();
}

void DatosdelHotel()
{
 void Hotel1;
    ofstream datos;
    datos.open("Hotel.txt",ios::app);
    cout<<"Nuevo Registro de cliente"<<endl;
    cout<<"Estadia: ";
    gets(Hotel1.Estadia);
    fflush(stdin);

    cout<<"Nombre: ";
    gets(Hotel1.Nombre);
    fflush(stdin);

    cout<<"Seleccion de salas: ";
    gets(Hotel1.Seleccion de salas);
    fflush(stdin);

    cout<<"Correo: ";
    gets(Hotel1.Correo);
    fflush(stdin);

    fflush(stdout);

    datos<<Hotel1.Estadia<<endl;
    datos<<Hotel1.Nombre<<endl;
    datos<<Hotel1.Seleccion de salas<<endl;
    datos<<Hotel1.Correo<<endl;

    datos.close();

}
