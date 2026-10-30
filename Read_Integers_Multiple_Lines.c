//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    long int a,b[100000],sum=0;
    scanf("%ld",&a);
    for (int i=0;i<a;i++){
        scanf("%ld",&b[i]);
        sum+=b[i];
    }

    printf("%ld",sum);
}

