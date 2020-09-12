#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int PedirNumero(char* mensaje, char* mensajeError, int* pOperando, int intentos)
{
	setbuf(stdout, NULL);

	int retorno = -1;
	int bufferInt;
	int resultadoScanf;

	if(mensaje != NULL && mensajeError != NULL && pOperando != NULL && intentos >= 0)
	{
		do{
			printf("%s", mensaje);
			fflush(stdin);
			resultadoScanf = scanf("%d", &bufferInt);

			if(resultadoScanf == 1)
			{
				retorno = 0;
				*pOperando = bufferInt;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				intentos--;
			}

		}while(intentos >= 0);
	}

	return retorno;
}


char Menu(int operandoUno, int operandoDos)
{
    char opcion;

    system("cls");

    printf("*****MENU DE OPCIONES*****\n\n");
    printf("a- Realizar todas las operaciones\n");
    printf("b- Sumar (%d + %d)\n", operandoUno, operandoDos);
    printf("c- Restar (%d - %d)\n", operandoUno, operandoDos);
    printf("d- Multiplicar (%d * %d)\n", operandoUno, operandoDos);
    printf("e- Dividir (%d / %d)\n", operandoUno, operandoDos);
    printf("f- Factorial (%d!) (%d!)\n", operandoUno, operandoDos);
    printf("g- Mostrar resultados de todas las operaciones\n");
    printf("h- Salir\n\n");
    fflush(stdin);

    printf("Ingrese su elección: ");
    opcion=getchar();

    return opcion;
}


int Sumar(int sumandoUno, int sumandoDos, int* pSuma)
{
	int retorno = -1;
	*pSuma = sumandoUno + sumandoDos;
	retorno = 0;
    return retorno;
}


int Restar(int minuendo, int sustraendo, int* pResta)
{
	int retorno = -1;
    *pResta = minuendo - sustraendo;
    retorno = 0;
    return retorno;
}


int Multiplicar(int factorUno, int factorDos, int* pMultiplicacion)
{
	int retorno = -1;
    *pMultiplicacion = factorUno * factorDos;
    retorno = 0;
    return retorno;
}


int Dividir(int dividendo, int divisor, float* pDivision)
{
    int retorno = -1;

    if(divisor != 0)
    {
        retorno = 0;
        *pDivision = dividendo / divisor;
    }

    return retorno;
}


int Factorial(int numero, int* pFactorial)
{
    int retorno = -1;
    int factorial = 1;

    if(numero != 0 || numero > 0)
    {
    	for(int i=1;i<=numero;i++)
        {
    		factorial = factorial * i;
         }

    	retorno = 0;
    	*pFactorial = factorial;
    }

    return retorno;
}


int RealizarOperaciones(int operandoUno, int operandoDos)
{
	int operacionesCompletadas = -1;
    int resultado;
    float resultadoDivision;

    if(Sumar(operandoUno, operandoDos, &resultado) == 0 && Restar(operandoUno, operandoDos, &resultado) == 0
    		&& Multiplicar(operandoUno, operandoDos, &resultado) == 0 && Dividir(operandoUno, operandoDos, &resultadoDivision) == 0
    		&& Factorial(operandoUno, &resultado) == 0 && Factorial(operandoDos, &resultado) == 0)
    {
    	operacionesCompletadas = 0;
    }

    return operacionesCompletadas;
}


void MostrarResultados(int operandoUno, int operandoDos)
{
	int resultado;
	float resultadoDivision;

	if(Sumar(operandoUno, operandoDos, &resultado) == 0)
	{
	    printf("El resultado de la suma es: %d\n", resultado);
	}
	else
	{
		printf("No se pudo realizar la suma.");
	}

	if(Restar(operandoUno, operandoDos, &resultado) == 0)
	{
	     printf("El resultado de la resta es: %d\n", resultado);
	}
	else
	{
	     printf("No se pudo realizar la resta.");
	}

	if(Multiplicar(operandoUno, operandoDos, &resultado) == 0)
	{
	    printf("El resultado de la multiplicación es %d\n", resultado);
	}
	else
	{
	    printf("No se pudo realizar la multiplicación.");
	}

	if(Dividir(operandoUno, operandoDos, &resultadoDivision) == 0)
	{
	   printf("El resultado de la division es: %.2f\n", resultadoDivision);
	}
	else
	{
	     printf("No se puede realizar división por 0.\n");
	}

	if(Factorial(operandoUno, &resultado) == 0)
	{
	    printf("El resultado del factorial del primer operando es: %d\n", resultado);
	}
	else
	{
	    printf("No se pudo realizar el factorial.\n");
	}

	if(Factorial(operandoDos, &resultado) == 0)
	{
	    printf("El resultado del factorial del segundo operando es: %d\n", resultado);
	}
	else
	{
	    printf("No se pudo realizar el factorial.\n");
	}
}
