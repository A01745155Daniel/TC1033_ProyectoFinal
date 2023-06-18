/*
Clase llantas
*/
#ifndef LLANTA_H
#define LLANTA_H

class Llanta
{
private:
    int presion;
    int presionNormal;

public:
    Llanta();
    Llanta(int presionInicial, int presionNormal);

    int getPresion();
    void setPresion(int presion);

    int getPresionNormal();
    void setPresionNormal(int presionNormal);
};

#endif
