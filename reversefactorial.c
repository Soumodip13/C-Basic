#include <stdio.h>
#include <conio.h>
#include <math.h>
int fact(int a){
    int i,j=1,k;
    k=a;
    for(i=1;i<=k;i++){
        j=j*i;
    }
    return j;
}
int main() {
    int i, j;
    printf("Enter the number to check if it is a Factorial or not\n");
    scanf("%d", &i);

    for (j = 1; j <= 100; j++) {
        if (fact(j) == i) {

        printf("The number is a Factorial of %d", j);
            break;
    }

}
    return 0;
}

