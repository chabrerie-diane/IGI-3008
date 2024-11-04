#include <stdio.h>

void sumult(int a, int b, int* res1, int* res2){
    *res1 = a+b;
    *res2 = a*b;
}


void main(){
    int r1;
    int r2;
    sumult(3,4, &r1, &r2);
    printf("%d %d \n", r1, r2);
}