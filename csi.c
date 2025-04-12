//calculate simple interest
#include<stdio.h>
int main(){
    float i, p, t, r;
    p = 100;
    r = 10;
    t = 3;
    i = (p*r*t)/100;
    printf("The total amount is:%f",i);

    return 0;
}