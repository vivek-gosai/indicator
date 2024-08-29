#include<stdio.h>

int main(){
    int arr[10],*p,i;
    printf("\nEnter 10 Elements\n");
    for(i=0; i<10; i++)scanf("%d",&arr[i]);    
    p=a;
    printf("\nArray contains..\n");
    for(i=0; i<10; i++){
        printf("\n%d",*p);
        p++;
    }
    return 0;
}