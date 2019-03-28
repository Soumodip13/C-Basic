#include<stdio.h>
#include<conio.h>
#include <math.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
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
    int n,i;
    int arr[100];
    int sum_min=0,sum_max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    for(i=0;i<n-1;i++){
     sum_min+=arr[i];
    }
    for(i=1;i<n;i++){
        sum_max+=arr[i];
    }
    printf("%d %d",sum_min,sum_max);
    return 0;
}
