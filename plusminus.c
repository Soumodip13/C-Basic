#include <stdio.h>
#include <conio.h>
#include<math.h>
int main(){
    int a,n,k;
    int arr[100];
    float p=0,m=0,z=0;
    scanf("%d",&a);
    for(n=0;n<a;n++){
        scanf("%d",&arr[n]);
    }
    for(n=0;n<a;n++){
        if(arr[n]<0)
        {
          m++;
        }
        else if(arr[n]>0){
            p++;
        }
        else {
            z++;
        }
    }
    printf("%f\n",p/a);
    printf("%f\n",m/a);
    printf("%f\n",z/a);
    return 0;

}