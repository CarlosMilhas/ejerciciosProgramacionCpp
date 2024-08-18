#include <iostream>

using namespace std;

// El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada
// frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de
// Micilina y 7 mg de Ácido Sinítico.
// Nos solicitan un programa donde se ingrese la cantidad de frascos de un
// pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
// Sinítico que son necesarios para elaborarlos.

int main()
{
    int cantidadFrascos;
    int pildoras;
    int betamol, micilina, acidoSinitico;

    cout << "ingresar cantidad de frascos: ";
    cin >> cantidadFrascos;

    pildoras = cantidadFrascos * 75;
    betamol = 45 * pildoras;
    micilina = 2 * pildoras;
    acidoSinitico = 7 * pildoras;
    cout << "Betamol: " << betamol << " mg, Micilina: " << micilina << " grs, Ácido Sinítico: " << acidoSinitico << " mg.";

    return 0;
}