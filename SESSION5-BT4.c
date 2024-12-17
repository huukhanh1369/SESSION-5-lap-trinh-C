#include<stdio.h>
int main(){
    int n,i =0;
    printf ("nhap vao bang cuu chuong tu 1 den 10 : ");
    scanf("%d",&n);
    while (i < 11){
        printf("%d x %d = %d\n", n, i, n* i);
        i++;
    }
    return 0;
}