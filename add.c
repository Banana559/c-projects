#include <stdio.h>

int add(int a, int b){
    int result = a + b;
    return result;
}

void main(){

    int a, b;
    int result;
    printf("type in 2 numbers.\n a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);

    result = add(a, b);

    printf("Result is%d\n", result);

}