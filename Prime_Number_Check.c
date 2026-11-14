#include <stdio.h>
int main(){
    int a,b;
    scanf ("%d",&a);

    for (int i=2;i<a;i++){
        if (a%i==0){ b=0; break;}
        else b=1;
    }
    if (b==1&&a>1) printf("Yes");
    else printf("No");
}