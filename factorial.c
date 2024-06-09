// How to creat any number to TABLE?
#include<stdio.h>
int main ( ) {
    int n ;
    printf(" Enter Your Number \n");
    scanf("%d",&n);
    int sum = 0 ;
    for ( int i = 0 ; i <=n ; i ++){
       sum = sum + i ;
    }
 printf("%d",sum);
    return 0;
}