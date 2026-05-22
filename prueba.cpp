#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdio>
#include <windows.h>
using namespace std;

void menuprincipal(){
    std::setlocale(LC_ALL, "Spanish");
    std::printf("-----Bienvenido a la calculadora cientifica-----\n");
    std::printf("Selecciona la operacion a realizar: \n");
    std::printf("1. Suma\n");
    std::printf("2. Resta\n");
    std::printf("3. Multiplicacion\n");
    std::printf("4. Division\n");
}



int main()
{ double num1, num2, res;
    menuprincipal();
    int opcion;
    std::cin >> opcion;

    std::printf("Ingresa el primer numero: ");
    std::cin >> num1;
    std::printf("Ingresa el segundo numero: ");
    std::cin >> num2;

    switch (opcion) {
        case 1:
            res = num1 + num2;
            std::printf("El resultado de la suma es: %.2f\n", res);
            break;
        case 2:
            res = num1 - num2;
            std::printf("El resultado de la resta es: %.2f\n", res);
            break;
        case 3:
            res = num1 * num2;
            std::printf("El resultado de la multiplicacion es: %.2f\n", res);
            break;
        case 4:
            if (num2 != 0) {
                res = num1 / num2;
                std::printf("El resultado de la division es: %.2f\n", res);
            } else {
                std::printf("Error: No se puede dividir por cero.\n");
            }
            break;
        default:
            std::printf("Opcion no valida.\n");
    }
  

system("pause");
    return 0;
}