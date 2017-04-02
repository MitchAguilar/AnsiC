//estructuras selectivas

#include <stdio.h>

int main (){
	
	int x;
	
	x=5;
	
	if(x==5){//"==" "<" ">" "<=" ">=" "!="
		printf("el valor de x es 5.\n");
	}else{
		printf("el valor de x no es 5.\5");
	}
	
	//ejercicio: declaramos uan varible entera y la iniciamos con un valor entre 1-10, por teclado solicitamos un numero y vemos sii hemos acertado
	
	int y, z;
	y= 5;
	scanf("%i",&z);
	if(y=z){
		printf ("has acertado en el valor. ");
	}else{
		 printf ("no hs acertado en el valor. ");
	}
	
	system("pause");
	return 0;
}
