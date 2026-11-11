//===== Write Your Logic Here =====
#include <stdio.h>
#include <string.h>
int main(){
    char cur[4];
    double a,b;
    scanf("%s %lf",cur,&a);

    if (strcmp(cur,"USD")==0) {
        b=a/80;
        printf("%0.2lf",b);
    }
    else if (strcmp(cur,"EUR")==0) {
        b=a/90;
        printf("%0.2lf",b);
    }
    else {
        b=a/100;
        printf("%0.2lf",b);
    }


}

