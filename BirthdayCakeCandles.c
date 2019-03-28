#include <stdio.h>
#include <conio.h>
#include <math.h>
void insertionSort(long double arr[], long double n)
{
    long i, j;
    long double key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main(){
    int i,val=0;
    long  n,max;
    long  arr[100000];
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
    insertionSort(arr,n);
    max=arr[n-1];
    for(i=0;i<n;i++){
        if(arr[i]==max) {
            val++;

        } }
        printf("%d",val);
        return 0;
    }




