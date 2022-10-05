//current distribution in parallel resistors combination
#include<stdio.h>
int main() {
    float r1,r2,i,i1,i2,x;
    printf("enter the total current in the circuit\n");
    scanf("%f",&i);
    printf("enter the two resistances in parallel\n");
    scanf("%f %f",&r1,&r2);
    printf("enter the resistance through which you want to calculate current\n");
    scanf("%f",&x);
    if(x==r1)
    {
        i1 = ((r2)/(r1+r2))*i;
        printf("current in %.1f ohm resistance is %.1f amperes\n",x,i1);
    }
    else
    {
        i2 = ((r1)/(r1+r2))*i;
        printf("current in %.1f ohm resistance is %.1f amperes\n",x,i2);
    }
}