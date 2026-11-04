//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    long int a,b[100000];
    scanf("%ld",&a);
    for (int i=0;i<a;i++){
        scanf("%ld",&b[i]);
    }
    for (int i=a-1;i>=0;i--){
        printf("%ld",b[i]);
        if (i>0) printf(" ");
    }
}

