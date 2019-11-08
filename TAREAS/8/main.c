#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	//declarar variales 
	float x;
	float y;
	float z;
	//convertir argumentos a flotantes
	x=atof(argv[1]);
	y=atof(argv[2]);
	//de grados farenheit a celcius, sera 1
	if(x==1){
		z=(y-32)/1.8;
		printf("%.2f\n",z);
		return 0;
	}
	//de grados celcius a farenheit, sera 0
	else if(x==0){
		z=32+(y*1.8);
		printf("%.2f\n",z);
		return 0:
	}
return 0;
}
