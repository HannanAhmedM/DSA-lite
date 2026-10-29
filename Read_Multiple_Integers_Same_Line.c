//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    int a,b[100000];
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
        printf("%d",b[i]);
        if (i<a-1) printf(" ");
    }
}

