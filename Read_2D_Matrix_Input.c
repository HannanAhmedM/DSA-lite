//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    int f=1;
    long int a,b,mat[1000][1000];
    scanf("%ld %ld",&a,&b);
    for (int i=0;i<a;i++){
        f=1;
        for (int j=0;j<b;j++){
            scanf("%ld",&mat[i][j]);
            if (f==0) printf(" ");
            printf("%ld",mat[i][j]);
            f=0;
        }
        printf("\n");
    }
}

