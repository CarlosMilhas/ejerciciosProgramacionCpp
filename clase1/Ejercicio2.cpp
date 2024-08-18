#include <iostream>

using namespace std;

// Hacer un programa que solicite por teclado que se ingresen dos números y
// luego guardarlos en dos variables distintas. A continuación se deben
// intercambiar mutuamente los valores en ambas variables y mostrarlos por
// pantalla.
// Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
// usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3

int main()
{
    float num1;
    float num2;
    float variableTempora;

    cout << "ingresar 2 numeros por teclado " << endl;
    cin >> num1;
    cin >> num2;

    variableTempora = num1;
    num1 = num2;
    num2 = variableTempora;

    cout << "los valores ingresados han sido " << num1 << " y " << num2;

    return 0;
}