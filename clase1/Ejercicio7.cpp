#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado el importe de una venta y el
// porcentaje de descuento aplicada a la misma y luego informar por pantalla el
// importe a pagar.
// Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces
// el total a pagar será de $1020.
// Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el
// total a pagar será de $800

int main()
{

    float importeVenta, porcentajeDescuento, valorFinal;

    cout << "Ingresar por pantalla el precio del producto e ingresar el descuento: ";
    cin >> importeVenta;
    cin >> porcentajeDescuento;
    valorFinal = (100 - porcentajeDescuento) * importeVenta / 100;
    cout << "el Valor final del producto es de $" << valorFinal;
    return 0;
}