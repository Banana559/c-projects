#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Type in first number:");
    scanf("%d", &a);

    printf("\nType in second number:");
    scanf("%d", &b);

    int c = a + b;

    printf("\nResult:%d", c);

    return 0;
}