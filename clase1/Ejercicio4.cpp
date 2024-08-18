#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado la cantidad de asientos totales en
// un avión y la cantidad de pasajes ocupados y luego calcular e informar el
// porcentaje de ocupación y el porcentaje de no ocupación del mismo.
// Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
// porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
// ocupación será de un 60%.

int main()
{

    float asientosTotales;
    float pasajesOcupados;
    float porcentajeDeOcupacion;
    float porcentajeDeNoOcupacion;

    cout << "ingrese la cantidad de asientos totales: ";
    cin >> asientosTotales;

    cout << "ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajesOcupados;

    porcentajeDeOcupacion = pasajesOcupados * 100 / asientosTotales;
    porcentajeDeNoOcupacion = 100 - porcentajeDeOcupacion;

    cout << "El porcentaje de lugares ocupados es igual a " << porcentajeDeOcupacion << "% y de lugares no ocupados es igual a " << porcentajeDeNoOcupacion << "%.";
    return 0;
}