#include <stdio.h>
#include <math.h>

int main(void){

    double a,b,c,temporario;

    scanf("%lf %lf %lf", &a, &b,&c);

    if (a < b){
        temporario = a;
        a = b;
        b = temporario;
    }

    if (b < c){
        temporario = b;
        b = c;
        c = temporario;
    }
    if (a < b){
        temporario = a;
        a = b;
        b = temporario;
    }

    if (a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }else if (pow(a,2.0) == pow(b,2.0) + pow(c,2.0)){
        printf("TRIANGULO RETANGULO\n");
    }else if (pow(a,2.0) > pow(b,2.0)+ pow(c,2.0)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if (pow(a,2.0) < (pow(b,2.0)+ pow(c,2.0))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c){
        printf("TRIANGULO EQUILATERO\n");
    }else if ((a == b && a != c) || (b == c && a != c ) || (a == c && b != c)){
        printf("TRIANGULO ISOSCELES\n");
    }


}