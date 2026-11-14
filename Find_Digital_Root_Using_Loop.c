//===== Write Your Logic Here =====
#include <stdio.h>
long int digroot(long int a){
    long int lastdig,rev=0;
    while (a!=0){
        lastdig=a%10;
        rev+=lastdig;
        a/=10;
    }
    return rev;
}
int main(){
    long int a,rev;
    scanf("%Ld",&a);
    rev=a;
    do{
        rev=(digroot(rev));
    } while(rev>9);

    printf("%d",rev);
    
}

