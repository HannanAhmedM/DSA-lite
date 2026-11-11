//===== Write Your Logic Here =====
#include <stdio.h>
#include <string.h>
int main(){
    long long int inc,csc;
    char ept[9];
    scanf("%lld %lld %s",&inc,&csc,ept);

    if (inc>=30000&&csc>=700){
        if (strcmp(ept,"salaried")==0) printf("Approved 8");
        else printf("Approved 10");
    }
    else printf("Rejected");
}

