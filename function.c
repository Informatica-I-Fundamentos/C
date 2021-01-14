#include <stdio.h>

void saludo(void){ //Declarando e Implementando la función
   printf("Hello World\n"); /* imprime la cadena */
   return; /* sale de la función */
}

int sumar(int n1, int n2){
	return n1 + n2;
}

int main(){ //Función principal
   //Declarando Variables
   int var1, var2;

   printf("Dame un número para sumar: ");
   scanf("%d", &var1);  //Asignar valor a variable por medio de la entrada estándar(teclado)
   printf("Dame otro número para sumar: ");
   scanf("%d", &var2);

   saludo(); //Invoco la función
   printf("El resultado de la suma es: %d\n", sumar(var1, var2)); //Invoco función e imprimo
}
