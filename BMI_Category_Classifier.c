//===== Write Your Logic Here =====
#include <stdio.h>
int main(){
    float w,h;
    scanf("%f %f",&w,&h);

    float bmi=w/(h*h);

    if (bmi<18.5) printf("Underweight");
    else if(bmi>=18.5&&bmi<25) printf("Normal");
    else if(bmi>=25&&bmi<30) printf("Overweight");
    else printf("Obese");
}

