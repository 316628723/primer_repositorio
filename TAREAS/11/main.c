#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double raiz(double n,double t,double c){
double prom;
double div;
while (fabs(div-c)>t){
	div=n/c;
	prom=(div+c)/2;
	c=prom;
}
long double res=c;
return res;
}
int main(int arg, char*argv[]){
	double x=atof(argv[1]);
	double y=atof(argv[2]);
	double z=atof(argv[3]);
	printf("%lf\n",raiz(x,y,z));
	return 0;

}