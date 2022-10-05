//voltage division in series circuit
#include<stdio.h>
int main() {
    float r1,r2,v1,v2,v,x;
    printf("program to find voltage across a resistor in series combination(voltage division)\n");
    printf("enter the volatge in circuit\n");
    scanf("%f",&v);
    printf("enter the two resistances\n");
    scanf("%f %f",&r1,&r2);
    v1 = ((r1)/(r1 + r2))*v;
    v2 = ((r2)/(r1 + r2))*v;
    printf("enter the resistance for which you want to calculate voltage across\n");
    scanf("%f",&x);
    if(x==r1)
    {
        printf("the voltage across %.1f ohm resistor is %.1f volts",r1,v1);
    }
    else
    {
        printf("the voltage across %.1f ohm resistor is %.1f volts",r2,v2);    
    }    
}