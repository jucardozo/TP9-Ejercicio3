#include <stdio.h>
int suma_digitos(int n);
int main(void)
{
	int n=4325;					//numero aleatorio, queda disposicion del usuario
	int resultado=suma_digitos(n);		//se invoca la funcion recursiva
	printf("%d\n",resultado);
	return 0;
}


int suma_digitos(int n)
{
	if( (n/10)<=9)						//caso base; cuando el resultado de la division es de un solo digito
	{
		return((n%10)+(n/10));			//se devuelve la suma de los dos ultimos digitos
	}
	return((n%10)+suma_digitos(n/10));		//parte recursiva
	
}