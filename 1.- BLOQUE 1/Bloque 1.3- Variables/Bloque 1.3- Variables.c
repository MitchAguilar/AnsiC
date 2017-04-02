// variables un c

#include <stdio.h>

int main () {
	int entero;//variable para entero,  16 bits, no puedes escribir numros mayores a -32768 y 32767 2^16
	entero=10;// se le da el valor al entero
	printf ("valor de entero es: %i.\n",entero);//se imprime
	
	float decimales;// variables para decimales, 32 bits, 2^32
	decimales= 10.5;// se les da u valor
	printf ("valor de decimales es: %f.\n",decimales);//se manda a imprimir
	
	double doble;//es de tipo flotante y posee 2^64
	doble= 10.5;// lo mismo de todas
	printf("valor de la doble es: %f.\n",doble);// al ser de tipo flotante se pone %f y ya está
	
	char caracteres;// cahr recibe caracteres
	caracteres='Hola';//se le da el valor
	printf("valor de caracter es: %c.\n",caracteres);// se imprime
	
	printf("valor  int es: %i.\n valor float es: %f.\n valor doble es: %f.\n valor de char es: %c.\n",entero,decimales,doble,caracteres);//se pueden imprimir muchas variables
	
	system("pause");
	return 0;
}
