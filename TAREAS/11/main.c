#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double raiz(double n,double t,double c){ //las variables de entrada n, la tolerancia y candidato
double prom;
double div;
while (fabs(div-c)>t){ //se le resta division a candidato 
	div=n/c;
	prom=(div+c)/2;// el promedio de la division y el candidato
	c=prom;
}
long double res=c;
return res;
}
int main(int arg, char*argv[]){ //va repitiendo el mismo procedimiento con los nuevos valores de la variable 
	double x=atof(argv[1]);
	double y=atof(argv[2]);
	double z=atof(argv[3]);
	printf("%lf\n",raiz(x,y,z));
	return 0;

}
