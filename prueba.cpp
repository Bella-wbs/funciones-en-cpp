#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdio>
#include <windows.h>
using namespace std;

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
    return a * 9 / 5 + 32; // Celsius a Fahrenheit
}

int main()
{
    std::setlocale(LC_ALL, "Spanish");
    printf("----Bienvenido a la calculadora científica----\n");
    printf("Escoje la operación que deseas realizar:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Potenciación\n");
    printf("6. Raíz cuadrada\n");
    printf("7. Conversion");

switch (opcion) {
    case 1: suma(); break;
    case 2: resta(); break;
    case 3: multiplicacion(); break;
    case 4: division(); break;
    case 5: potenciacion(); break;
    case 6: raiz_cuadrada(); break;
    case 7: conversion_celsius_fahrenheit(); break;
    default: printf("Opción no válida\n"); break;



    system("pause");
    return 0;
}