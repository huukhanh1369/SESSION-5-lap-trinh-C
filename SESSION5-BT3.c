#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("hay nhap vao 1 so nguyen n :");
    scanf("%d",&n);
    while ( i <= n )
    {
        sum = sum + i;
        i++;
    }
    printf("tong so nguyen duong la : %d",sum);
    return 0;
}