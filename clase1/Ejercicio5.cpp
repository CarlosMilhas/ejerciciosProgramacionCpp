#include <iostream>

using namespace std;

// Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
// programa para ingresar por teclado la cantidad de alfajores vendidos de cada
// una de las tres marcas y luego se informe el porcentaje de ventas para cada
// una de ellas.
// Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
// programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

int main()
{
    float a, b, c, suma;

    float porcentajeA, porcentajeB, porcentajeC;
    cout << "ingresar cantidad de alfajores vendidos para A, B Y C: ";

    cin >> a;
    cin >> b;
    cin >> c;

    suma = a + b + c;

    porcentajeA = a * 100 / suma;
    porcentajeB = b * 100 / suma;
    porcentajeC = c * 100 / suma;
    cout << "resultados a = " << porcentajeA << "% resultado b = " << porcentajeB << "% resultado c " << porcentajeC << "%";

    return 0;
}