//===== Write Your Logic Here =====
#include <stdio.h>
#include<string.h>
int main(){
    char a[7];
    fgets(a,sizeof(a),stdin);

    if (strcmp(a,"red")==0) printf("STOP");
    else if (strcmp(a,"yellow")==0) printf("WAIT");
    else printf("GO");
}

