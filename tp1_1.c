#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *punt, edad = 20;
    punt = &edad;
    printf("Hola mundo\n");
    printf("Contenido del puntero:%d",*punt);
    printf("\nDireccion de memoria almacenada por el puntero:%p",punt);
    printf("\nLa direccion de memoria de la variable:%p",&edad);
    printf("\nLa direccion de memoria del puntero es:%p",&punt);
    printf("\nTamanio de memoria ocupada por la variable:%d",sizeof(int));



    return 0;
}