/*
Daniel Guerrero González A01745155
Proyecto final
*/
#include "Llanta.h"
#include "Luz.h"
#include "TanqueGasolina.h"

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

class Automovil
{
private:
    bool encendido;
    int velocidad;
    Llanta llantas[4];
    Luz luces;
    TanqueGasolina tanque;

public:
    Automovil();

    void prenderApagar();
    void acelerar();
    void frenar();
    void prenderLuces();
    void apagarLuces();
    void cargarGasolina(float litros);

    bool estaEncendido();
    int getVelocidad();
    float getGasolina();
    bool tieneLucesPrendidas();
    Llanta &getLlanta(int numeroLlanta);
    bool estaEnEstadoDePeligro(int numeroLlanta);
    int getPresionLlanta(int numeroLlanta);
    int getPorcentajeNivelGasolina();
};

#endif