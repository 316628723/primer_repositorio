#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argu[]){
	int resultado;
	int argui[argc];
	//lista de valores enteros, donde sera impreso en resultado 
	for(int i=1; i<argc;i++){
		resultado=1;
		//se determina que uno de los argumentos que sera excluido
		for(int j=i;j<argc;j++){
			argui[j]=atoi(argu[j]);
			resultado=resultado*argui[j];
			//se excluye el argumento que fue seleccionado y se realiza la operación
		}
		resultado=resultado/argui[i];
		printf("%i\n",resultado);
		//se inmprime el resultado 
	}
	return 0;	
}