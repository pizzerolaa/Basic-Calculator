// Basic Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculadora en aplicacion de consola" << endl << endl;
    cout << "Porfavor ingrese una opracion en el formato: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    while (true) {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0) {
            cout << "¡Intente dividir por cero!" << endl;
            continue;
        }
        else {
            result = c.Calculate(x, oper, y);
        }
        cout << "El resultado de " << x << oper << y << " es: " << result << endl;
    }

    return 0;
}
