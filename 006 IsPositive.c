#include<stdio.h>

int main(){

    int x;
    printf("Enter any number : ");
    scanf("%d", &x);
    printf("\n");

    if(x>=0){
        printf("%d is positive.\n",x);
    }
    else{
        printf("%d is negative.\n",x);
    }

    return 0;
}
