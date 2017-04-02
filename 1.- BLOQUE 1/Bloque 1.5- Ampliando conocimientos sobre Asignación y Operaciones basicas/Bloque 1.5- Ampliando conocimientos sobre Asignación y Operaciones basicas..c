//ampliación de conocimeitos en cuanto aplicacione y asignaciones

#include <stdio.h>
#include <math.h>
int main (){
	int x,y;
	
	x = 10;
	y = 2;
	
	//operaciones basicas con c
	
	x += y;// es equivalente a x=x+y;
	printf ("el valor de la suma  es: %i.\n\n",x);
	
	x = x - y;//recuerde que el valor de x se sobre escribe
	printf ("el valor de la resta  es: %i.\n\n",x);// nuevamente se manda a imprimir
	
	x = x * y;
	printf ("el valor de la multiplicación  es: %i.\n\n",x);//recordar que tras cada operación los valore se sobre escriben en la variable x
	
	x = x / y;
	printf ("el valor de la divición  es: %i.\n\n",x);
	
	x = x % y;//es lo que queda de una divición
	//printf ("el valor de la resto  es: %i.\n\n",x);//todo es igual para imprimir
	
	//operaciones agregando librerias
	x= pow(y,x);//para hacer elevaciones a la potencia se escribe la palabra recervada pow
	printf ("el valor de la potencia de y a la x  es: %i.\n\n",x);//se impriem igual
	
	x=sqrt(x);//sqrt se usa para sacar la raiz cuadrada de un valor
	printf("el valor de la raiz cuadrada de x es: %i.\n\n");
	
	//operadore de incremento
	x++;//incrementa una unidad 
	printf("x incrementada un unidad es: %i.\n\n",x);
	
	x--;//decrementa una unidad
	printf("x decrementada un unidad es: %i.\n\n",x);
	
	system("pause");
	return 0;
}
