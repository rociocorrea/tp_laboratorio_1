#include <stdio.h>
#include <stdlib.h>

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/*PROTOTIPO DE FUNCIONES*/

/** \brief Esta funci�n pide los operandos para realizar las operaciones
 *
 * \param mensaje para ingreso de n�mero
 * \param mensaje de error en caso de ingreso err�neo
 * \param puntero resultado operando
 * \param intentos para ingresar el n�mero
 * \return (-1)Error - (0)Ok
 *
 */
int PedirNumero(char* mensaje, char* mensajeError, int* pOperando, int intentos);


/** \brief Despliega men� de opciones para realizar las operaciones, adem�s se muestran los operadores
 *
 * \param operandoUno
 * \param operandoDos
 * \return retorna la opci�n para realizar una operaci�n
 *
 */
char Menu(int operandoUno, int operandoDos);


/** \brief Realiza la suma entre dos n�meros
 *
 * \param sumandoUno
 * \param sumandoDos
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
 int Sumar(int sumandoUno, int sumandoDos, int* pSuma);


/** \brief Realiza la resta entre dos n�meros
 *
 * \param minuendo
 * \param sustraendo
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Restar(int minuendo, int sustraendo, int* pResta);


/** \brief Realiza la multiplicaci�n entre dos n�meros
 *
 * \param factorUno
 * \param factorDos
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Multiplicar(int factorUno, int factorDos, int* pMultiplicacion);


/** \brief Realiza la divisi�n entre dos n�meros
 *
 * \param dividendo
 * \param divisor
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Dividir(int dividendo, int divisor, float* pDivision);


/** \brief Realiza el factorial de un n�mero
 *
 * \param n�mero para sacar factorial
 * \param puntero con resultado
 * \return (-1)Error - (0)Ok
 *
 */
int Factorial(int numero, int* pFactorial);


/** \brief Realiza todas las operaciones del men�
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
