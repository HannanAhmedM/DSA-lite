//===== Write Your Logic Here =====
# include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>=b&&a<c) printf("Normal");
    else if (a<b) printf("Low");
    else if (a>=c&&a<d) printf("High");
    else printf("Overflow");
}

