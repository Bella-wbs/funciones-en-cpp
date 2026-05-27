#include <iostream>
#include <cmath>
#include <cstdio>
#include <windows.h>
using namespace std;
//declaracion de librerias a utilizar

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

double potenciacion(double a, double b) {
    return pow(a, b);
}

double raizcuadrada(double a) {
    return sqrt(a);
}

double conversioncelsiusfahrenheit(double a) {
    return a * 9.0 / 5.0 + 32.0; // Celsius a Fahrenheit
}

double conversionfahrenheitacelsius(double a) {
    return (a - 32.0) * 5.0 / 9.0; // Fahrenheit a Celsius
}

//declaración de funciones para cada operación  

int main()
{

    printf("----Bienvenido a la calculadora cientifica----\n");
    printf("Escoje la operacion que deseas realizar:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Potenciacion\n");
    printf("6. Raiz cuadrada\n");
    printf("7. Conversion\n");
//se muestra el menú princicapal
    int opcion;
    scanf("%d", &opcion);
//se escanea la opción que eliga el usuario
    double a = 0.0;
    double b = 0.0;
    double resultado = 0.0;
//definición de variables para almacenar los números y el resultado
    switch (opcion) {
        case 1:
            printf("Ingresa dos numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = suma(a, b);
            printf("Resultado: %g\n", resultado);
            break;
        case 2:
            printf("Ingresa dos numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = resta(a, b);
            printf("Resultado: %g\n", resultado);
            break;
        case 3:
            printf("Ingresa dos numeros: ");
            scanf("%lf %lf", &a, &b);
            resultado = multiplicacion(a, b);
            printf("Resultado: %g\n", resultado);
            break;
        case 4:
            printf("Ingresa dos numeros: ");
            scanf("%lf %lf", &a, &b);
            if (b == 0.0) {
                printf("Error: division por cero\n");
            } else {
                resultado = division(a, b);
                printf("Resultado: %g\n", resultado);
            }
            break;
        case 5:
            printf("Ingresa la base y el exponente: ");
            scanf("%lf %lf", &a, &b);
            resultado = potenciacion(a, b);
            printf("Resultado: %g\n", resultado);
            break;
        case 6:
            printf("Ingresa el numero: ");
            scanf("%lf", &a);
            if (a < 0.0) {
                printf("Error: no se puede calcular la raiz de un numero negativo\n");
            } else {
                resultado = raizcuadrada(a);
                printf("Resultado: %g\n", resultado);
            }
            break;
        case 7: //en este caso, se muestran dos opciones para elegir el tipo de conversion de temperatura
            printf("1. Celsius a Fahrenheit\n");
            printf("2. Fahrenheit a Celsius\n");
            printf("Elige conversion: ");
            scanf("%d", &opcion);
            if (opcion == 1) {
                printf("Ingresa grados Celsius: ");
                scanf("%lf", &a);
                resultado = conversioncelsiusfahrenheit(a);
                printf("Resultado: %g °F\n", resultado);
            } else if (opcion == 2) {
                printf("Ingresa grados Fahrenheit: ");
                scanf("%lf", &a);
                resultado = conversionfahrenheitacelsius(a);
                printf("Resultado: %g °C\n", resultado);
            } else {
                printf("Opcion de conversion no válida\n");
            } 
            break;
        default:
            printf("Opcion no válida\n");
            break;
    }//uso de ciclos y condicionales   

    system("pause");
    return 0;
}