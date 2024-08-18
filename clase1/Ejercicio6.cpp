#include <iostream>

using namespace std;

// Hacer un programa para que un comercio ingrese por teclado la recaudación en
// pesos para cada una de las cuatro semanas del mes. El programa debe listar la
// recaudación promedio por semana y el porcentaje de recaudación por semana.
// Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación
// promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

int main()
{
    float recaudacionDePesosSemana1, recaudacionDePesosSemana2, recaudacionDePesosSemana3, recaudacionDePesosSemana4;
    float porcentaje1, porcentaje2, porcentaje3, porcentaje4;
    float promedioSemana;

    cout << "ingresar las recaudaciones de las 4 semanas: ";
    cin >> recaudacionDePesosSemana1;
    cin >> recaudacionDePesosSemana2;
    cin >> recaudacionDePesosSemana3;
    cin >> recaudacionDePesosSemana4;

    float suma = recaudacionDePesosSemana1 + recaudacionDePesosSemana2 + recaudacionDePesosSemana3 + recaudacionDePesosSemana4;
    promedioSemana = suma / 4;
    porcentaje1 = recaudacionDePesosSemana1 * 100 / suma;
    porcentaje2 = recaudacionDePesosSemana2 * 100 / suma;
    porcentaje3 = recaudacionDePesosSemana3 * 100 / suma;
    porcentaje4 = recaudacionDePesosSemana4 * 100 / suma;

    cout << "el promedio es $" << promedioSemana << " y los porcentajes son " << porcentaje1 << "% " << porcentaje2 << "% " << porcentaje3 << "% " << porcentaje4 << "%";
    return 0;
}