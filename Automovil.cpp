#include <iostream>
#include "Automovil.h"

using namespace std;

Automovil::Automovil() : encendido(false), velocidad(0), luces(), tanque(42.0)
{
    for (int i = 0; i < 4; i++)
    {
        llantas[i].setPresion(33);
    }
}

void Automovil::prenderApagar()
{
    if (encendido)
    {
        encendido = false;
        velocidad = 0;
        luces.apagar();
    }
    else
    {
        encendido = true;
    }
}

void Automovil::acelerar()
{
    if (encendido && velocidad < 230)
    {
        velocidad += 15;
        if (velocidad > 160)
        {
            cout << "PELIGRO! Velocidad alta." << endl;
        }
        float consumo = 0.005 * velocidad;
        tanque.consumirGasolina(consumo);
    }
    else if (velocidad >= 230)
    {
        velocidad = 230; // Establecer la velocidad máxima
        cout << "Velocidad máxima alcanzada (230 km/h)." << endl;
    }
}

void Automovil::frenar()
{
    if (encendido && velocidad > 0)
    {
        velocidad -= 25;
        if (velocidad < 0)
        {
            velocidad = 0;
        }
    }
}

void Automovil::prenderLuces()
{
    if (encendido)
    {
        luces.prender();
    }
}

void Automovil::apagarLuces()
{
    if (encendido)
    {
        luces.apagar();
    }
}

void Automovil::cargarGasolina(float litros)
{
    if (litros > 0)
    {
        float espacioDisponible = tanque.getCapacidad() - tanque.getNivel();
        if (espacioDisponible >= litros)
        {
            tanque.cargar(litros);
        }
        else
        {
            tanque.cargar(espacioDisponible);
        }
    }
}

bool Automovil::estaEncendido()
{
    return encendido;
}

int Automovil::getVelocidad()
{
    return velocidad;
}

float Automovil::getGasolina()
{
    return tanque.getNivel();
}

bool Automovil::tieneLucesPrendidas()
{
    return luces.estaPrendida();
}

Llanta &Automovil::getLlanta(int numeroLlanta)
{
    return llantas[numeroLlanta - 1];
}

bool Automovil::estaEnEstadoDePeligro(int numeroLlanta)
{
    int presionLlanta = llantas[numeroLlanta - 1].getPresion();
    int presionNormal = llantas[numeroLlanta - 1].getPresionNormal();
    int porcentajeDiferencia = ((presionLlanta - presionNormal) * 100) / presionNormal;
    return (porcentajeDiferencia > 20 || porcentajeDiferencia < -20);
}

int Automovil::getPresionLlanta(int numeroLlanta)
{
    return llantas[numeroLlanta - 1].getPresion();
}

int Automovil::getPorcentajeNivelGasolina()
{
    float porcentaje = (tanque.getNivel() / tanque.getCapacidad()) * 100.0f;
    return static_cast<int>(porcentaje);
}
