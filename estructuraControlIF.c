#include <stdio.h>

int main(){ //Función principal
   //Declarando Variables
   int edad;

   printf("¿Qué edad tienes?: ");//Preguntamos al usuario un valor
   scanf("%d", &edad);  //Asignar valor a variable por medio de la entrada estándar(teclado)
   
   //Estructura de selección simple
   if(edad < 0){
      printf("\vIngresa una edad válida\n");
   }else if(edad <= 13){
      printf("\vEres infante\n");
   }else if(edad > 13 && edad < 18){
      printf("\vEres adolescente\n");
   }else if(edad > 18 && edad < 60){
      printf("\vEres adulto\n");
   }else{
      printf("\vEres adulto mayor\n");
   }
}
