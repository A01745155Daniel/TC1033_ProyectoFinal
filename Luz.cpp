#include "Luz.h"

Luz::Luz()
{
    prendida = false;
}

void Luz::prender()
{
    prendida = true;
}

void Luz::apagar()
{
    prendida = false;
}

bool Luz::estaPrendida()
{
    return prendida;
}
