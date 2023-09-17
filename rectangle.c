#include<stdio.h>
int main(){

float l,b,p,a;

printf ("Enter the length: ");
scanf ("%f", &l);

printf ("\n");

printf ("Enter the breadth: ");
scanf ("%f", &b);

printf ("\n");

p= 2*(l+b);
printf ("The perimeter is: %f\n\n", p);

a= l*b;
printf ("The area is: %f\n\n", a);

if (a>p){
    printf ("The area is larger than the perimeter.\n\n");
}

else if (p>a){
    printf ("The perimeter is larger than the area.");
}

else {
    printf ("Both area and perimeter are same.");
}

    return 0;

}