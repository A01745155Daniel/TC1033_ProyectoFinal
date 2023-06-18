/*
Clase tanque de gasolina
*/
#ifndef TANQUEGASOLINA_H
#define TANQUEGASOLINA_H

class TanqueGasolina
{
private:
    float capacidad;
    float nivel;

public:
    TanqueGasolina(float capacidad);
    float getCapacidad();
    float getNivel();
    void llenar();
    void vaciar();
    void cargar(float litros);
    void consumirGasolina(float consumo);
    float getPorcentajeNivel();
};

#endif
