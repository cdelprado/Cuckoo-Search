#include "CS.h"

#define lb -10
#define ub 10

double fun1(double x[], int dim){
	int i;
	double sum=0;
	for(i=0; i<dim; i++){
		sum = sum + pow(x[i],2);
	}

	return sum;
}

double fun2(double x[], int dim){
	double fitness=0;
	int k;
	for(k=0; k<dim; k++){

		fitness = fitness + fabs(x[k]);	
		
	}
	double mult=1;
	int m;
		for (m = 0; m < dim;m++)
		{
			mult = mult*fabs(x[m]);
		}
	fitness = fitness + mult;
	return fitness;
}

double fun4(double x[], int dim){
	int k;
	double maxim = 0;
	for(k=0; k<dim; k++){
		if(fabs(x[k]) > maxim){
			maxim = fabs(x[k]);
		}	
		
	}
	return maxim;
}


int main(){
	Nests Nests[nnest];
	double (*fptr)(double[],int);
	fptr = fun1;
	printf("funcion sphere\n");
	CS(lb,ub,d,Nests,fptr);

	printf("funcion 2\n");
	fptr = fun2;
	CS(lb,ub,d,Nests,fptr);

	printf("funcion 4\n");
	fptr = fun4;
	CS(lb,ub,d,Nests,fptr);

	return 0;
}
