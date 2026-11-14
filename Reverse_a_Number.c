#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

    int lastdig,i,rev=0;
    //===== Write Your Logic Here =====
    while(n>0){
        lastdig=n%10;
        n/=10;
        
        rev=rev*10+lastdig;
    }

    printf("%d",rev);


    return 0;
    

}