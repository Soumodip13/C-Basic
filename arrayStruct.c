#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
struct student{
    int roll_no;
    char name[30];
};
int main(){
    struct student st[10];
    printf("Enter names in order \n");
    for(int i=0;i<5;i++){
        scanf("%s",&st[i].name);
    }
    printf("Enter Rolls in order \n");
    for(int i=0;i<5;i++){
        scanf("%d",&st[i].roll_no);
    }
    printf("Names and Rolls in order \n");
    for(int i=0;i<5;i++){
        printf("%s %d\n",st[i].name,st[i].roll_no);
    }
    return 0;

}

