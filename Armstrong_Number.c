#include <stdio.h>
#include <math.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

int digits=0,n1=n,n2=n,lastdig,sum=0;
    //===== Write Your Logic Here =====
while (n1!=0){
    n1=n1/10;
    digits++;
}
while (n2!=0){
    lastdig=0;
    lastdig=n2%10;
    sum+=pow(lastdig,digits);
    n2/=10;
}
if (sum==n)
printf("Yes");
else printf("No");

}