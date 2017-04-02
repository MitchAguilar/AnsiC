//maarcos, asignación y operaciones
#include <stdio.h>
#define PI 3.1416//al incluir un valor le decimos al sistema que es valor se podrá usar en todo el programa y que cada vez que lo usemos será el mismo
int main(){
	float x;// lo definimos en una flotante
	int y;//se  introduce como entero o lo que necesitemos
	x= PI;//le asignamos el valor de a la flotante
	
	printf("el valor de PI es: %f.\n\n",x);	//lo imprimimos como flotante
	
	printf("introduce un valor y: \n\n");
	scanf("%i",&y);//el escaner sirve para pedir un valor por consola
	printf("el valor que ingresaste es: %i.\n\n",y);//se muestra el valor por consola
	
	x= x * y;//se le da un nuevo valor a la x siendo el resultado de la operación
	printf("el valor de la operación es: %f.\n\n",x);//se imprime normalmente
	
	
	return 0;
}
