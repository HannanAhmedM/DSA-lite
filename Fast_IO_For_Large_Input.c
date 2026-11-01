//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    long int a,b[1000000];
    scanf("%ld",&a);
    for (int i=0;i<a;i++){
        scanf("%ld",&b[i]);
        printf("%ld",b[i]);
        if (i<a-1) printf(" ");
    }
}

