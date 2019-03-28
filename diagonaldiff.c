#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
int difference(int n)
{

    int d1 = 0, d2 = 0;
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {


            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        d1 += arr[i][i];
        d2 += arr[i][n-i-1];
    }


    return abs(d1 - d2);
}
int main(){
    int n,r;
    scanf("%d",&n);
    r=difference(n);
    printf("%d",r);

    return(0) ;

}


