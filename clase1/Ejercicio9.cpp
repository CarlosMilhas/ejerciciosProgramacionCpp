#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado una cantidad de minutos y
// mostrar por pantalla a cuantas horas y minutos equivalen.
// Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que
// equivalen a 6 horas y 20 minutos.
// Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que
// equivalen a 12 horas y 0 minutos.
// Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que
// equivalen a 0 horas y 50 minutos

int main()
{

    int cantidadDeMinutos, horas, minutos;

    cout << "ingresar la cantidad de minutos: ";
    cin >> cantidadDeMinutos;

    horas = cantidadDeMinutos / 60;
    minutos = cantidadDeMinutos % 60 ;

    cout << "la cantidad de horas y minutos en " << cantidadDeMinutos << " minutos es igual a: " << horas << " horas y " << minutos << " minutos";
    return 0;
}