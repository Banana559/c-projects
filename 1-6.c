#include <stdio.h>

int main(){
    int N;
    printf("type in N:");
    scanf("%d", &N);

    int result = 0;
    for(int i = 0; i<=N; i++){
        if(i % 2 ==0){   

        result = result +i;
        } else {
            result = result;
        }
    }

    printf("Result:%d",result);
    return 0;
}