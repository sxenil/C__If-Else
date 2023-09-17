#include<stdio.h>
int main(){

int a,b,c;

printf ("Enter age of Neon: ");
scanf ("%d",&a);
printf ("\n");

printf ("Enter age of Argon: ");
scanf ("%d",&b);
printf ("\n");

printf ("Enter age of Krypton: ");
scanf ("%d",&c);
printf ("\n");

if (a<b) {
    if (b<c)
    printf ("Neon is the youngest.");
}

else if (b<c) {
    if (b<a)
    printf ("Argon is the youngest.");
}

else {
    printf ("Krypton is the youngest.");
}

    return 0;

}