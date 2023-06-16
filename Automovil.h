/*
Daniel Guerrero González A01745155
Proyecto final
*/
#include "TanqueGasolina.h"
#include "Luz.h"
#include "Llanta.h"

#ifndef AUTOMOVIL.H
#define AUTOMOVIL.H
class Automovil
{
private:
    bool estado;
    int velocidad;
    TanqueGasolina tanque;
    Luz luces;
    Llanta llantas;

    
public:
    void encendidoApagado();
    void acelerar(int);
    void frenar(int);

};

#endif

