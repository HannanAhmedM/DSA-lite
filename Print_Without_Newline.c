//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    char sym; int f=1;
    long int a,b[1000000];
    scanf("%c",&sym);
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if (f==0) printf("%c",sym);
        printf("%d",b[i]);
        f=0;
    }

}

