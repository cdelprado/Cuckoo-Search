/* Rutina para generacion de numeros aleatorios gaussianos con
   media cero y desviacion estandar sigma.

   Codigo original de Joachim Sprave, University of Dortmund, 
   Alemania, Dept. of Computer Science and Systems Analysis
*/

#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <sys/types.h>

#ifndef RAND_H
#define RAND_H 1

#define NRAND_SAMPLES 5
#define Uniform randreal
//static int Seed = 0;
static int isinit = 0;

double randreal(void);
double Gauss(double sigma);
double NI(double m, double sigma);
void initrandom(int seed);
double randreal(void);
double rndreal(double lo,double hi);
int rndint(int lo, int hi);
int flip(double _prob);
#endif
