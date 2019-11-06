#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argu[]){
	int x;
	int y;
	float z=1;
	x=atof(argu[1]);
	y=atof(argu[2]);
	for(int i=0;i<y;i++){
		z=z*x;
	}
	printf("%.2f\n",z);
	return 0;
	}