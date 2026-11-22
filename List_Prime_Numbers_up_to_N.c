#include <stdio.h>
#include <stdbool.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====

int a;
    bool is_prime[n + 1];
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    //===== Write Your Logic Here =====
if (n>1){

for (int i=2;i<=n;i++){
    a=0;
    for (int j=2;j<i;j++){
        if(i%j==0){ a=1; break;}
    }
    if (a==1) continue;
    else printf("%d",i);

    printf("\n");
}}

else printf("NULL");

}