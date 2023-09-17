#include<stdio.h>
int main(){
    
    int x;
    
    printf("Enter year: ");
    scanf("%d", &x);
    
    if(x%4==0 && (x%100!=0 || x%400==0)){
    printf("The year %d is a leap year",x);
    }
    
    else
    {
        printf("The year %d is not a leap year.",x);
    }
    
    return 0;

}