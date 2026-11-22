//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    long long int a,b,sumeven=0,sumodd=0;
    scanf("%ld %ld",&a,&b);

    for  (int i=a;i<=b;i++){
        if (i%2==0) sumeven+=i;
        else sumodd+=i;

    }

    printf("%ld %ld",sumeven,sumodd);
}

