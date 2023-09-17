#include<stdio.h>
int main(){

float cp, sp;

printf ("Enter the cost price: ");
scanf("%f", &cp);

printf ("Enter the selling price: ");
scanf("%f", &sp);

if (cp<sp){
    printf ("Profit is incurred.");
}
    else if (cp>sp) {
        printf ("Loss is incurred.");
    }
    
    else {
        printf ("Neither profit nor loss is incurred.");
    }

    return 0;
}