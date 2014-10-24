#define iter 1000

#define nnest 25
#define d 15

typedef struct Nest{
    double v[d];
    double fx;
}Nests;

void CS(int, int, int, Nests *,double (*fobj)(double[],int));

double (*fobj)(double x[], int);
