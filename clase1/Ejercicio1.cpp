#include <iostream>

using namespace std;

// Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
// por un operario y el valor que se le paga por hora trabajada y listar por pantalla
// el sueldo que le corresponda

int main()
{

    float horasTrabajadas, valorPorHora, sueldo;

    cout << "ingresar por teclado la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "ingresar valor por hora: ";
    cin >> valorPorHora;

    sueldo = horasTrabajadas * valorPorHora;

    cout << "el sueldo correspondiente es: " << sueldo;
    return 0;
}