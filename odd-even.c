#include<stdio.h>
int main(){
    
    int x;
    
    printf("Input a positive integer: ");
    scanf("%d", &x);
    
    if(x%2==0){
    printf("The integer %d is even",x);
    }
    
    else
    {
        printf("The integer %d is odd",x);
    }
    
    return 0;

}