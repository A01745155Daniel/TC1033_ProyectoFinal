/*
Daniel Guerrerp González A01745155
Proyecto Final main
*/
#include <iostream>
#include "Automovil.h"

using namespace std;
int main()
{
    Automovil carro;

    while (true)
    {
        int opcion;
        cout << "=== Tablero ===" << endl;
        cout << "1. Encender/Apagar" << endl;
        cout << "2. Acelerar" << endl;
        cout << "3. Frenar" << endl;
        cout << "4. Encender/Apagar Luces" << endl;
        cout << "5. Cargar Gasolina" << endl;
        cout << "6. Cambiar la presion de las llantas" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        cout << endl;
        if (opcion == 1)
        {
            carro.prenderApagar();
            if (carro.estaEncendido())
            {
                cout << "El automóvil está encendido." << endl;
            }
            else
            {
                cout << "El automóvil está apagado." << endl;
            }
        }
        else if (opcion == 2)
        {
            carro.acelerar();
            cout << "Velocidad actual: " << carro.getVelocidad() << " km/h" << endl;
        }
        else if (opcion == 3)
        {
            carro.frenar();
            cout << "Velocidad actual: " << carro.getVelocidad() << " km/h" << std::endl;
        }
        else if (opcion == 4)
        {
            if (carro.estaEncendido())
            {
                if (carro.tieneLucesPrendidas())
                {
                    carro.apagarLuces();
                    cout << "Las luces están apagadas." << endl;
                }
                else
                {
                    carro.prenderLuces();
                    cout << "Las luces están encendidas." << endl;
                }
            }
            else
            {
                cout << "No se pueden encender las luces, el automovil esta apagado" << endl;
            }
        }
        else if (opcion == 5)
        {
            float litros;
            cout << "Ingrese los litros de gasolina a cargar: ";
            cin >> litros;
            carro.cargarGasolina(litros);
            cout << "Nivel de gasolina actual: " << carro.getPorcentajeNivelGasolina() << "%" << endl;

            if (carro.getPorcentajeNivelGasolina() < 15)
            {
                cout << "Nivel de gasolina bajo." << endl;
            }
        }
        else if (opcion == 6)
        {
            int numeroLlanta;
            cout << "Escoja la llanta (1-4): ";
            cin >> numeroLlanta;
            if (numeroLlanta >= 1 && numeroLlanta <= 4)
            {
                int presion;
                cout << "Ingrese la nueva presión de la llanta: ";
                cin >> presion;
                carro.getLlanta(numeroLlanta).setPresion(presion);
                cout << "Presión de llanta " << numeroLlanta << ": " << carro.getLlanta(numeroLlanta).getPresion() << " psi" << endl;
            }
            else
            {
                cout << "Número de llanta inválido." << endl;
            }
        }
        else if (opcion == 7)
        {
            cout << "Fin del programa" << endl;
            return 0;
        }
        else
        {
            cout << "Opción inválida" << endl;
        }

        for (int i = 1; i <= 4; i++)
        {
            if (carro.estaEnEstadoDePeligro(i))
            {
                cout << "PELIGRO! La llanta " << i << " excede la presion segura" << endl;
            }
        }

        cout << "Nivel de gasolina: " << carro.getPorcentajeNivelGasolina() << "%" << endl;

        if (carro.getPorcentajeNivelGasolina() < 15)
        {
            cout << "PELIGRO! Nivel de gasolina bajo." << endl;
        }

        for (int i = 1; i <= 4; i++)
        {
            cout << "Presión de llanta " << i << ": " << carro.getLlanta(i).getPresion() << " psi" << endl;
        }

        cout << endl;
    }

    return 0;
}
