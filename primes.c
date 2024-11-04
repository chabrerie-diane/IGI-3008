// primes.c

#include <stdio.h>
#include <math.h>

int isprime(int p){
    // à compléter
    if(p==2 ){
        return 1;
    }
    if (p<=1 || p%2 ==0){
        return 0;
    }
    int test = 3;
    int nbdiv = 1;
    while(test <= (int)sqrt((double)p) +1){
        if (p%test==0){
            return 0;
        }
        test +=2;
    }
    return 1;
}

int main(){
    // à compléter
    int nbpremiers = 0;
    for (int n =0; n<100000; n++){
        if (isprime(n)){
            nbpremiers+=1;
        }
    }
    printf("nb de nb premiers : %d\n",nbpremiers );
}