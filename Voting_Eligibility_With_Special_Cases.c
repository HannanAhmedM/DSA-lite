//===== Write Your Logic Here =====
#include <stdio.h>
#include<string.h>
int main(){
    int a;
    char cit[11],rec[10];
    scanf("%d %s %s",&a,cit,rec);
    if (a>=18&&strcmp(cit,"citizen")==0&&strcmp(rec,"clean")==0) 
    printf("Eligible");
    else printf("Not Eligible");
}

