#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int saludo(int n){//programa del saludo 
	if(n==0){ //si no hay ninguna persona no se saluda a nadie y se imprime 0 
		return n;
	}
	int x=n;//se hace la operacion para el saludo quitando uno por el que ya saludo a todos 
	x=saludo(n-1)+(x-1);
	return x;
	}
int main(int arg, char*argv[]){//se va estar repitiendo hasta que la ultima persona no tenga a quien saludar
	int z=atoi(argv[1]);//comienza con el primer argumento
	printf("%d\n",saludo(z));
	return 0;
}