#include <stdio.h>
 
void main()
{
    int b;
 
    printf("Enter a number: \n");
    scanf("%d", &b);
    if (num > 0)
        printf("%d is a positive number \n", b);
    else if (b < 0)
        printf("%d is a negative number \n", b);
    else
        printf("0 is neither positive nor negative");
}
