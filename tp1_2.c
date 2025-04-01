#include<stdio.h>
#include<stdlib.h>


int cuadrado(int n);
void cuadradoVoid(int n);

int main(){

    return 0;
}

int cuadrado(int n){
    return n*n;
}
void cuadradoVoid(int n){
    int resultado = n*n;
    printf("%d\n", resultado);
}