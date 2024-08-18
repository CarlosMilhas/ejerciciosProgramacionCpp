#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado una cantidad de minutos y
// mostrar por pantalla a cuántos días, horas y minutos equivalen.
// Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que
// equivalen a 1 día, 1 hora y 20 minutos.
// Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que
// equivalen a 0 día, 8 horas y 0 minutos

int main()
{
    int cantidadDeMinutos, dias, horas, minutos;

    cout << "ingresar cantidad de minutos: ";
    cin >> cantidadDeMinutos;

    dias = (cantidadDeMinutos / 60) / 24;
    horas = (cantidadDeMinutos / 60) - (dias * 24);
    minutos = (cantidadDeMinutos % 60);

    cout << dias << " dias, " << horas << " horas, " << minutos << " minutos.";
    return 0;
}