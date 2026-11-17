#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//===== Declare Local Variables / Functions here if required =====

    int z;
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //===== Write Your Logic Here =====
    z=gcd(a,b);
    printf("%d",z);



    return 0;
}