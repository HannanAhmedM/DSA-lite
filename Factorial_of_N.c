#include <stdio.h>

//===== Declare Imports here if required =====


int main() {
    int n;
    scanf("%d", &n);
    //===== Write Your Logic Here =====
long long int prod=1;

for (int i=1;i<=n;i++){
    prod*=i;
}
printf("%ld",prod);

}