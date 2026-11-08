//===== Write Your Logic Here =====
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if(a>0) printf("Positive\n");
    else if(a<0) printf("Negative\n");
    else printf("Zero\n");

    if (a%2==0) printf("Even");
    else printf("Odd");
}

