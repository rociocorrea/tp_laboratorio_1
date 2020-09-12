#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CANTIDAD_ELEMENTOS 2
#define CANTIDAD_MENSAJE 200

/*MAIN*/
int main()
{
	setbuf(stdout, NULL);

    // DECLARO VARIABLES A UTILIZAR
    int operandoUno;
    int operandoDos;
    int resultado;
    float resultadoDivision;
    int cargaCorrecta;
    char respuesta= 's';

    if(PedirNumero("Ingresar 1er operando (A=x)", "Error. ", &operandoUno, 3) != 0)
    {
    	printf("El valor que intentó ingresar es incorrecto. Se acabaron los intentos.");
    	cargaCorrecta = -1;
    }
    else
    {
    	if(PedirNumero("Ingresar 2do operando (B=y)", "Error. ", &operandoDos, 3) != 0)
    	{
    	    printf("El valor que intentó ingresar es incorrecto. Se acabaron los intentos.");
    	    cargaCorrecta = -1;
    	 }
    	 else
    	 {
    	    cargaCorrecta = 0;
    	 }
    }

    /*SE EJECUTA LA OPCIÓN CON LA FUNCIÓN MENU DENTRO DEL SWITCH
    Y SE MUESTRA EL RESULTADO DE LA OPERACIÓN SI LA CARGA DE OPERANDOS FUE CORRECTA*/
    if(cargaCorrecta == 0)
    {
    	do{
    		switch(Menu(operandoUno, operandoDos))
    		{
            	case 'a':
            		printf("\nEligió REALIZAR TODAS LAS OPERACIONES\n");
            		if(RealizarOperaciones(operandoUno,operandoDos) == 0)
            		{
            			printf("Se realizaron todas las operaciones. Para ver los resultados elija la opción 'g'.\n");
            		}
            		else
            		{
            			printf("No se pudieron realizar todas las operaciones. Intente nuevamente.");
            		}
            		break;

            	case 'b':
            		printf("\nEligió SUMAR\n");
            		if(Sumar(operandoUno, operandoDos, &resultado) == 0)
            		{
            			printf("El resultado de la suma es: %d\n", resultado);
            		}
            		else
            		{
            			printf("No se pudo realizar la suma.");
            		}
            		break;

            	case 'c':
            		printf("\nEligió RESTAR\n");
            		if(Restar(operandoUno, operandoDos, &resultado) == 0)
            		{
            			printf("El resultado de la resta es: %d\n", resultado);
            		}
            		else
            		{
            			printf("No se pudo realizar la resta.");
            		}
            		break;

            	case 'd':
            		printf("\nEligió MULTIPLICAR\n");
            		if(Multiplicar(operandoUno, operandoDos, &resultado) == 0)
            		{
            			printf("El resultado de la multiplicación es %d\n", resultado);
            		}
            		else
            		{
            		    printf("No se pudo realizar la multiplicación.");
            		}
            		break;

            	case 'e':
            		printf("\nEligió DIVIDIR\n");
            		if(Dividir(operandoUno, operandoDos, &resultadoDivision) == 0){
            			printf("El resultado de la division es: %.2f\n", resultadoDivision);
            		}
            		else
            		{
            			printf("No se puede realizar división por 0.\n");
            		}
            		break;

            	case 'f':
            		printf("\nEligió FACTORIAL\n");
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
            		break;

            	case 'g':
            		printf("\nRESULTADOS:\n");
            		MostrarResultados(operandoUno, operandoDos);
            		break;

            	case 'h':
            		printf("\nEligió SALIR\n");
            		printf("\nEstá seguro que desea salir? Presione 's'\n\n");
            		fflush(stdin);
            		respuesta=getchar();
            		break;

            	default:
            		printf("Esta opción es inválida.\n");
            		break;
    		}

    		//PREGUNTA PARA CONTINUAR CON OTRA OPERACIÓN
    		printf("\nDesea realizar otra operacion? Presione 'n' o 's' \n");
    		fflush(stdin);
    		respuesta=getchar();

    	}while(respuesta== 'n');
    }

    return 0;
}
