#include <stdio.h>
int main()
{   
    printf("BITWISE OPERATION OF & AND |  \n");
    int a=60; /*Binary for 60=0011 1100*/
    int b=13; /*Binary for 13=0000 1101*/   
    int c=0;
    
    c=a&b; /*Binary for 12=0000 1101*/
    printf("%d",c); /* & Operation*/
    
    int d=0;
    d=a|b; /*Binary for 61=0011 1101*/
    printf("\n%d\n",d); /* \ Operation*/

    /*Logical Operation of && AND ||*/
    printf("\nLOGICAL OPERATION OF & AND |  \n");
    
    int x,y,z;
    x=5;
    y=20;
    z=11;
    
    if (x%5==0 && y%5==0) /* && Operation*/
        printf("Both are multiple of 5\n");
        
    if (x%5==0 || z%5==0) /* || Operation*/
        printf("Either of the number is multiple of 5\n");
        
    return 0;
}

