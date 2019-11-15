#include <stdio.h>
#include <math.h>
#include <math.h>
int main (argc, char *argv[]){
	double a, b, c, s, w, k ,x1,x2,n,m,i1,i2,r1;//declarar variables
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);
	if(a!=0){//si a es diferente de cero se realiza la operacion 
		s=2*a;
		w=(b*b)-(4*a*c);
	if(w>=0){
		k=sqrt(w);
		x1=(b+k)/s;
		x2=(b-k)/s;
	if(x1==x2){ //si llegaran a ser iguales
		printf("%.2lf\n",x1);
	}
	else{//si x da raices enteras
		printf("%.2lf\n",x1);
		printf("%.2lf\n",x2);
	}
	}
	else{//si da raices complejas 
		n=(4*a*c)-(b*b);
		m=sqrt(n);
		i1=m/s;
		r1=b/s;
		printf("%.2lf+%.2lfi\n",r1,i1);
		printf("%.2lf-%.2lfi\n",r1,i1);
	}
	}
	return 0;
	}
