#include "TanqueGasolina.h"

TanqueGasolina::TanqueGasolina(float capacidad)
{
    this->capacidad = capacidad;
    nivel = capacidad; // Tanque lleno por defecto
}

float TanqueGasolina::getCapacidad()
{
    return capacidad;
}

float TanqueGasolina::getNivel()
{
    return nivel;
}

float TanqueGasolina::getPorcentajeNivel()
{
    return (nivel / capacidad) * 100;
}

void TanqueGasolina::llenar()
{
    nivel = capacidad;
}

void TanqueGasolina::vaciar()
{
    nivel = 0.0;
}

void TanqueGasolina::cargar(float litros)
{
    if (litros > 0)
    {
        float espacioDisponible = capacidad - nivel;
        if (litros <= espacioDisponible)
            nivel += litros;
        else
            nivel = capacidad;
    }
}

void TanqueGasolina::consumirGasolina(float consumo)
{
    if (consumo > 0)
    {
        if (nivel >= consumo)
            nivel -= consumo;
        else
            nivel = 0.0;
    }
}