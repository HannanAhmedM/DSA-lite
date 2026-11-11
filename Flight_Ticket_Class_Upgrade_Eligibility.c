//===== Write Your Logic Here =====
#include <stdio.h>
#include<string.h>
int main(){
    char tier[7];
    long int fare,seats;
    scanf("%s %ld %ld",tier,&fare,&seats);

    if ((fare>=10000||strcmp(tier,"gold")==0)&&(seats>=1)) printf("Upgrade");
    else printf("No Upgrade");
}

