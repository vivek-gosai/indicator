#include<stdio.h>
void swap(int *x, int *y){
    int swaping;
    swaping=*x;
    *x = *y;
    *y = swaping;
}
int main(){

    int a,b;
    printf("\nEnter first number:- ");
    scanf("%d", &a);
    printf("Enter second number:- ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("a=%d\n", a);
    printf("b=%d\n\n", b);
    return 0;
}