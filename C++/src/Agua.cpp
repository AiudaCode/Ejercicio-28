#include "Agua.h"

Agua::Agua()
{
    minutos = 0;
}

Agua::~Agua()
{
    //dtor
}

//Implementacion del metodo para calcular la cantidad de botellas
int Agua::botellasDeAgua()
{
    //el calculo es muy sencillo solo debemos multiplicar las 192 onzas que escupe una ducha por minuto
    //por los minutos que digite el usuario y ese resultado lo dividimos entre las 16 onzas de la botella de agua
    int botellas = (192 * minutos) / 16;
    return botellas;//retornamos el resultado
}

//Implementacion de los metodos Set y Get del atributo "minuto"
void Agua::setMinutos(int n)
{
    minutos = n;
}

int Agua::getMinutos()
{
    return minutos;
}
