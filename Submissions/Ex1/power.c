#include "myMath.h"

//returns EXP^x
double Exponent(int x){

int i;
double total=1.0;

//EXP^X = EXP * EXP * ... * EXP   x times
for(i=0; i<x; i++){
	total *= EXP;
}

	return total;
}

//returns x^y
double Power(double x , int y){

int i;
double total=1.0;

//x^y = x * x * x * ... * x   y times
for(i=0; i<y; i++){
	total *= x;
}

	return total;
}
