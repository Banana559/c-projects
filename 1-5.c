#include <stdio.h>

int main(){
    int N;
    printf("type in N:");
    scanf("%d", &N);

    int result = 0;
    for(int i = 0; i<N; i++){
    

        result = result +i;
    }

    printf("Result:%d",result);
    return 0;
}