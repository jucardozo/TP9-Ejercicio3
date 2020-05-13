#include <stdio.h>
//ERRORES:
//1)Falta el .h de la funcion
//2)No es una funcion recursiva, porque se esta llamando mal, deberia llamarse como suma_digitos y no como digitos.
//3)Le falta el caso base , para que tenga sentido
//LA FUNCION SUMAS LOS DIGITOS DEL NUMERO QUE LE PASEN.
int suma_digitos(int n)
{
	return((n%10)+digitos(n/10));
	
}