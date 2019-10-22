#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	double y=0;
	for (int i=1; i<argc; i++){
		double x=atof(argv[i]);
		y=x+y;
	}
	double promedio=y/(argc-1);
	printf("%.2lf\n", promedio);
	return 0;
}