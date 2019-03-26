#include <stdio.h>
#include<conio.h>
#include <math.h>
        int fact(int a){
                    int i,j=1,k;
                    k=a;
                    for(i=1;i<=k;i++){
                        j=j*i;
                                    }
                    return j;
}
double root(int a){
    double p;
    double t;
    t=a;
    p=pow(a,0.5);
    return p;
}
int main(){
    int k,l;
    double d;
    printf("Enter the number\n");
    scanf("%d",&k);
    l=fact(k);
    printf("The Factorial is %d\n",l);
    d=root(l);
    printf("The root is %f",d);
    return 0;
}

