#include<stdlib.h>
#include<stdio.h>

double atlag(double a, double b) {
    return (a + b) / 2;
}

int main(){

double a = 5;
double b = 3;
double atlagertek = 100;

atlagertek = atlag(3, 5);
printf("%lf\n", atlagertek);


    return 0;
}