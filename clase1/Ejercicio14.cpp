#include <iostream>

using namespace std;

// Hacer un programa para ingresar el importe de una compra y el descuento a
// aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
// importe total a cobrar.
// Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
// Importe: 4500, Descuento: 1800, total: 2700.

int main()
{
    int importeCompra, descuento;
    float importeFinal, descuentoAplicado;

    cout << "ingresar importe de compra: ";
    cin >> importeCompra;
    cout << "ingresar descuento: ";
    cin >> descuento;

    importeFinal = importeCompra * (100 - descuento) / 100;
    descuentoAplicado = importeCompra - importeFinal;
    cout << "importe sin descuento: $" << importeCompra << ", descuento aplicado: $" << descuentoAplicado << ", importe final: $" << importeFinal;

    return 0;
}