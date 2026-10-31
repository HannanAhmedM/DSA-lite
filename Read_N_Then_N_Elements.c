//===== Write Your Logic Here =====
#include <stdio.h>
#include <string.h>
int main(){
    long int a, b[100000];
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%ld",&b[i]);
        printf("%ld",b[i]);
        if (i<a-1) printf(" ");
    }
}

