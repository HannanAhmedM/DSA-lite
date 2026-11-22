#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

    int i,sum=0;
    //===== Write Your Logic Here =====
    for (i=1;i<=n/2;i++){
        if (n%i==0)
        sum+=i;
    }

    if(sum==n)
    printf("Yes");

    else printf("No");



    return 0;

}