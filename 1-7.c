#include <stdio.h>

int main(){
    int N;
    printf("type in N:");
    scanf("%d", &N);

   for (int i = 0; i<=N; i++){
    for(int k = 0; k<=i; k++){
        printf("x");
    }
    printf("\n");
}

  
    return 0;
}