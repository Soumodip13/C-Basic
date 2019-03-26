#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
int main(){
    printf("------SIN TABLE from 0* to 90*------\n");
    float p,q;
    for(p=0;p<=90;p++){
        q=(PI*p)/180;
        printf("%f ",sinf(q));
        printf("\n");
    }
    printf("------COS TABLE from 0* to 90*------\n");

    for(p=0;p<=90;p++){
        q=(PI*p)/180;
        printf("%f ",cosf(q));
        printf("\n");
    }
    printf("------TAN TABLE from 0* to 90*------\n");

    for(p=0;p<=90;p++){
        q=(PI*p)/180;
        printf("%f ",tanf(q));
        printf("\n");
    }
    printf("------COT TABLE from 0* to 90*------\n");

    for(p=0;p<=90;p++){
        q=(PI*p)/180;
        printf("%f ",pow(tanf(q),-1));
        printf("\n");
    }
    printf("------SEC TABLE from 0* to 90*------\n");

    for(p=0;p<=90;p++){
        q=(PI*p)/180;
        printf("%f ",pow(cosf(q),-1));
        printf("\n");
    }
    printf("------COSEC TABLE from 0* to 90*------\n");

    for(p=0;p<=90;p++){
        q=(PI*p)/180;
        printf("%f ",pow(sinf(q),-1));
        printf("\n");
    }
    return 0;
}