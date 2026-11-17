#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

int a=0,b=1,c=0;
    //===== Write Your Logic Here =====

while (n!=0){
    printf("%d",a);
    c=a+b;
    a=b; b=c;
    if (n>1) printf(" ");
    n--;
}

}