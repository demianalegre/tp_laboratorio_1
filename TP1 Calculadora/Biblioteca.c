#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
La funcion Suma pide 2 numeros de tipo float,
los suma y muestra el resultado sin devolver nada.
*/

void Suma(float a,float b)
{
    float resultado;
    resultado=a+b;
    printf("El resultado de la suma es %.2f\n",resultado);
    return;
}

/*
La funcion Resta pide 2 numeros de tipo float,
los resta y muestra el resultado sin devolver nada.
*/

void Resta(float a, float b)
{
    float resultado;
    resultado=a-b;
    printf("El resultado de la resta es %.2f\n",resultado);
    return;
}

/*
La funcion Division pide 2 numeros de tipo float,
el segundo numero (b) divide al primer numero (a)
y muestra el resultado sin devolver nada.
*/

void Division(float a, float b)
{
    if(a== 0 || b== 0)
    {
        printf("El resultado de una division con 0 es 0\n");
        return;
    }
    float resultado;
    resultado=a/b;
    printf("El resultado de la division es %.2f\n",resultado);
    return;
}

/*
La funcion Multiplicacion pide 2 numeros de tipo float,
los multiplica y muestra el resultado sin devolver nada.
*/

void Multiplicacion(float a, float b)
{
    if(a== 0 || b== 0)
    {
        printf("El resultado de una multiplicacion con 0 es 0\n");
        return;
    }
    float resultado;
    resultado= a*b;
    printf("El resultado de la multiplicacion es %.2f\n",resultado);
    return;
}

/*
La funcion Factorial es una funcion recursiva
(se llama dentro de si misma), pide solo
un numero de tipo float, si el numero ingresado
es 0, la funcion retorna 1 (el factorial de 0 es 1),
lo mismo pasa si el numero ingresado es 1 (el factorial de 1 es 1),
si el numero es distinto de 0 o 1, la funcion pasa a llamarse a si misma
y retorna la variable respuesta que es el factorial del numero ingresado.
*/

int Factorial(float a)
{
    int respuesta;
    if(a==0)
    {
        return 1;
    }
    if(a==1)
    {
        return 1;
    }
    respuesta=a*Factorial(a-1);
    return respuesta;
}

int ValidarNumerico(char str[])
{
    int i= 0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}
