#include <iostream>
#include "Agua.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Agua (Instanciaciación)
    Agua* obj = new Agua();
    //se declara la variable "minutos"
    int minutos;
    do//preguntaremos al usuario la longitud que dura en la ducha
    {
        cout << "Digite la longitud de su duracion en la ducha: ";
        cin >> minutos;//guardamos en la variable "minutos"
        obj->setMinutos(minutos);//llamamos al metodo modificador y le asignamos la variable "minutos"
    }
    while(minutos < 0);//mientras el usurio digite un valor entero menor a 0 repetira las intrucciones
    cout << "Minutos: " << obj->getMinutos() << endl;//mostramos los minutos que dura su ducha
    cout << "Botellas: " << obj->botellasDeAgua() << endl;//se muestra la cantidad de botellas
    return 0;
}
