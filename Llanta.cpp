#include "Llanta.h"

Llanta::Llanta()
{
    presion = 33;       
    presionNormal = 33; 
}

Llanta::Llanta(int presionInicial, int presionNormal)
{
    presion = presionInicial;
    this->presionNormal = presionNormal;
}

int Llanta::getPresion()
{
    return presion;
}

void Llanta::setPresion(int presion)
{
    this->presion = presion;
}

int Llanta::getPresionNormal()
{
    return presionNormal;
}

void Llanta::setPresionNormal(int presionNormal)
{
    this->presionNormal = presionNormal;
}
