#include <stdio.h>

int main(){
    while(1){
    int a;
    int b;
    
    printf("\nType in first number:");
    scanf("%d", &a);

    printf("\nType in second number:");
    scanf("%d", &b);

    char mode;

    printf("Type in mode:");
    scanf(" %c", &mode);
    
    if(mode == 'q'){
        break;
    }

    if(mode == '+'){
    int c = a + b; 
       printf("\nAddition Result:%d", c);
    } else if(mode == '*'){
    int d = a * b;
       printf("\nProduct Result:%d", d);
    } else if( mode =='/'){
            double e = (double)a/b;
                  printf("\nDivision Result:%.2lf", e);
    }else if (mode == 'a'){
    double f = (a+b)/2.0;
             printf("\nAverage Result:%.2lf", f);

    } else{
        printf("INVALID INPUT");
    }
    }


    return 0;
}