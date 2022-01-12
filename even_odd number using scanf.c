#include <stdio.h>
int main()    
{    
    int n;
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    if(n%2==0)
    printf("%d is the even number.",n);
    
    else
    printf("%d is a odd number.",n);
    
    return 0;
    }
