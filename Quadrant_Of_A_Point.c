//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>0&&b>0) printf("1");
    else if(a<0&&b>0) printf("2");
    else if(a<0&&b<0) printf("3");
    else if(a>0&&b<0) printf("4");
    else if(a==0&&(b>0||b<0)) printf("X-axis");
    else if(b==0&&(a>0||a<0)) printf("Y-axis");
    else printf("Origin");


}

