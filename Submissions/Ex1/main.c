#include <stdio.h>
#include "myMath.h"

int main(){

//f(𝑥)=𝑒^𝑥+𝑥^3−2
double num;

printf("Please insert a real number: ");
scanf("%lf", &num);

double ePowX = Exponent((int)num); //𝑒^𝑥
double xPowThree = Power(num,3); //𝑥^3
float firstpart = add(ePowX, xPowThree); //𝑒^𝑥+𝑥^3
float total1 = sub(firstpart,2); //𝑒^𝑥+𝑥^3−2

printf("The value of f(𝑥)=𝑒^𝑥+𝑥^3−2 at the point %lf is: %0.4lf\n", num, total1);


//f(x) = 3x + 2X^2
printf("Please insert a real number: ");
scanf("%lf", &num);

double first = mul(num,3); //3x
double second = mul(Power(num,2),2); //2*X^2
float total2 = add(first,second); //3*x + 2*X^2

printf("The value of f(x) = 3x + 2X^2 at the point %lf is: %0.4lf\n", num, total2);


//f(x) = (4x^3)/5 -2x
printf("Please insert a real number: ");
scanf("%lf", &num);

double num1 = Power(num,3);//x^3
double num2 = mul(num1,4); //4*x^3
double num3 = div(num2,5); //(4*x^3)/5
double num4 = mul(num,2); // 2x
float total3 = sub(num3,num4);// (4*x^3)/5 -2*x

printf("The value of f(x) = (4x^3)/5 -2x at the point %lf is: %0.4lf\n", num, total3);

return 0;
}
