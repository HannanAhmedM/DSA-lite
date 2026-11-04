//===== Write Your Logic Here =====
#include<stdio.h>
int main(){
    int a;
    double b;
    char c[100];
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%s",c);

    int len=strlen(c);

    printf("%d\n",a);
    printf("%0.2lf\n",b);
    for (int i=0;i<len;i++){
        printf("%c",c[i]);
    }

    
}

