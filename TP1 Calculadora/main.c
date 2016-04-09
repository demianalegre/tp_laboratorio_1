#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include <string.h>

int main()
{
    char seguir= 's';
    int opcion= 0;
    float numero=0;
    float numero2=0;
    char auxnumerostr[20];
    int auxnumero;
    int factorialnumero;

    system("cls");

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numero);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!, se toma el primer operando)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        gets(auxnumerostr);
        while(!ValidarNumerico(auxnumerostr))
        {
                printf("Error, el numero debe ser mayor o igual a 0.Ingrese opcion: ");
                gets(auxnumerostr);
        }
        auxnumero=atoi(auxnumerostr);
        opcion=auxnumero;

        switch(opcion)
        {
        case 1:
            printf("1er Operando: ");
            fflush(stdin);
            gets(auxnumerostr);
            while(!ValidarNumerico(auxnumerostr))
            {
                printf("Error, el numero debe ser mayor o igual a 0.Ingrese 1er Operando: ");
                gets(auxnumerostr);
            }
            auxnumero=atoi(auxnumerostr);
            numero=auxnumero;
            break;
        case 2:
            printf("2do Operando: ");
            fflush(stdin);
            gets(auxnumerostr);
            while(!ValidarNumerico(auxnumerostr))
            {
                printf("Error, el numero debe ser mayor o igual a 0.Ingrese 2do Operando: ");
                gets(auxnumerostr);
            }
            auxnumero=atoi(auxnumerostr);
            numero2=auxnumero;
            break;
        case 3:
            Suma(numero,numero2);
            break;
        case 4:
            Resta(numero,numero2);
            break;
        case 5:
            Division(numero,numero2);
            break;
        case 6:
            Multiplicacion(numero,numero2);
            break;
        case 7:
            factorialnumero=Factorial(numero);
            printf("El factorial de %.2f es %d\n",numero,factorialnumero);
            break;
        case 8:
            Suma(numero,numero2);
            Resta(numero,numero2);
            Division(numero,numero2);
            Multiplicacion(numero,numero2);
            factorialnumero=Factorial(numero);
            printf("El factorial de %.2f es %d\n",numero,factorialnumero);
            break;
        case 9:
            seguir= 'n';
            break;
        default:
            printf("\nCaso incorrecto\n");
            break;
        }
    }
    return 0;
}
