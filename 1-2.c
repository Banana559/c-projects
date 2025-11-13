#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Type in first number:");
    scanf("%d", &a);

    printf("\nType in second number:");
    scanf("%d", &b);

    int c = a + b;

    int d = a * b;

    double e = (double)a/b;

    double f = (a+b)/2.0;

    printf("\nAddition Result:%d", c);

        printf("\nProduct Result:%d", d);

            printf("\nDivision Result:%.2lf", e);

                printf("\nAverage Result:%.2lf", f);

    return 0;
}