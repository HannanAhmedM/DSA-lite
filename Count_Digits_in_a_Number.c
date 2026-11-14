#include <stdio.h>

//===== Declare Imports here if required =====



//===== Declare Global Variables / Functions here if required =====



int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    


    int count = 0;

    //===== Write Your Logic Here =====
    if(n==0) count++;
    while (n>0){
        n/=10;
        count++;
    }
    printf("%d",count);


}