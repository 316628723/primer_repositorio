#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	//declarar variales 
	double x;
	double y;
	double z;
	//convertir argumentos a dobles
	x=atof(argv[1]);
	y=atof(argv[2]);
	//de grados farenheit a celcius, sera diferente de 0
	if(x!=0){
		z=(y-32)/1.8;
		printf("%.2lf\n",z);
		return 0;
	}
	//de grados celcius a farenheit, sera 0
	else if(x==0){
		z=32+(y*1.8);
		printf("%.2lf\n",z);
		return 0;
	}
return 0;
}
