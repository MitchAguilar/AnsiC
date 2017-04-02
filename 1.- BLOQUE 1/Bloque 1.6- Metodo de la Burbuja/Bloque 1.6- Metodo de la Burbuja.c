//metodo de la bobuja
#include <stdio.h>

//intercambiar los valores de dos numeros enteros producidos por el teclado
int main(){
	
	int x , y, aux;//para hacer el metodo de la borbuja se crea una variable auxiliar
	
	printf("el valor de x es: ");
	scanf("%i",&x);//se recibe el valor en x
	
	printf("el valor de y es: ");
	scanf("%i",&y);//se recibe el valor en y
	
	aux = x;
	x = y;
	y= aux;
	
	printf("el valor de x es:  %i.\n",x);
	printf("el valor de y es:  %i.\n",y);
	
	system("pause");
	return 0;
}
