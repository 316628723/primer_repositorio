#include <stdio.h>
#include <math.h>
void burbuja(int*item, int cont){//ordenar menor a mayor metodo de la burbuja
	int i, j, ordenado;
	int temp;
	for(i=1;i<cont;i++){//evalua si es mayor o menor
	for(j=cont;j<i;j--){
		ordenado=1;
		if(item[j-1]>item[j]){
			temp=item[j-1];
			item[j-1]=item[j];
			item[j]=temp;
			ordenado++;
	}
	}
	if(ordenado==0);//el ordenado dejara de ordenar hasta que llegue a 0
	break;
	}
}
int main(int argc, char *argv[]){//desde aqui comienza que tan largo sera la lista 
	int arreglo[argc];
	for(int i=1;i<argc;i++){
		double x=atof(argv[i]);
		arreglo[i]=x;
	}
	burbuja(arreglo,argc-1);//se muestra el arreglo ordenado
	for(int i=1;i<argc;i++);
		printf("%d",arreglo[i]);
	return 0;
}
