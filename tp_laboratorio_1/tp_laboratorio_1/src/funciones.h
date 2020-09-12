#include <stdio.h>
#include <stdlib.h>

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/*PROTOTIPO DE FUNCIONES*/

/** \brief Esta función pide los operandos para realizar las operaciones
 *
 * \param mensaje para ingreso de número
 * \param mensaje de error en caso de ingreso erróneo
 * \param puntero resultado operando
 * \param intentos para ingresar el número
 * \return (-1)Error - (0)Ok
 *
 */
int PedirNumero(char* mensaje, char* mensajeError, int* pOperando, int intentos);


/** \brief Despliega menú de opciones para realizar las operaciones, además se muestran los operadores
 *
 * \param operandoUno
 * \param operandoDos
 * \return retorna la opción para realizar una operación
 *
 */
char Menu(int operandoUno, int operandoDos);


/** \brief Realiza la suma entre dos números
 *
 * \param sumandoUno
 * \param sumandoDos
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
 int Sumar(int sumandoUno, int sumandoDos, int* pSuma);


/** \brief Realiza la resta entre dos números
 *
 * \param minuendo
 * \param sustraendo
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Restar(int minuendo, int sustraendo, int* pResta);


/** \brief Realiza la multiplicación entre dos números
 *
 * \param factorUno
 * \param factorDos
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Multiplicar(int factorUno, int factorDos, int* pMultiplicacion);


/** \brief Realiza la división entre dos números
 *
 * \param dividendo
 * \param divisor
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Dividir(int dividendo, int divisor, float* pDivision);


/** \brief Realiza el factorial de un número
 *
 * \param número para sacar factorial
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Factorial(int numero, int* pFactorial);


/** \brief Realiza todas las operaciones del menú
 *
 * \param operandoUno
 * \param operandoDos
 * \return (-1)Error - (0)Ok
 *
 */
int RealizarOperaciones(int operandoUno, int operandoDos);


/** \brief Muestra los resultados de todas las operaciones
 *
 * \param operandoUno
 * \param operandoDos
 * \return no retorna nada
 *
 */
void MostrarResultados(int operandoUno, int operandoDos);


#endif // FUNCIONES_H_INCLUDED
