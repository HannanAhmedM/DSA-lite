//===== Write Your Logic Here =====
#include<stdio.h>
int main(){
    char a[10000],*lines;
    for (int i=0;i<=100000;i++){
        scanf("%c",&a[i]);
    }
    int len=strlen(a);
    for (int i=0;i<len;i++){
        
        printf("%c",a[i]);
    }

}

