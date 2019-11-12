#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
	int x;
	int suma=0;
	x=atoi(argv[1]);
	while(x>0){//se realizara la suma de los numeros de la lista en orden
		suma=suma+x%10;
		x=x/10; //no volver a sumar el digito que ya fue sumado
	}
	printf("%i\n",suma);
	return 0;
}