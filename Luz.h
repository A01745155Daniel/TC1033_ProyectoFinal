/*
Clase luces
*/
#ifndef LUZ_H
#define LUZ_H

class Luz
{
private:
    bool prendida;

public:
    Luz();
    void prender();
    void apagar();
    bool estaPrendida();
};

#endif
