//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    long int a;
    int lastdig,max=0;
    scanf("%ld",&a);

    while(a!=0){
        lastdig=a%10;
        if(lastdig>max) max=lastdig;
        a/=10;
        
    }

    printf("%d",max);
}

