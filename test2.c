#include <stdio.h>
#include <string.h>

struct chardata{
    char name[20];
    int coins;
    int speed;

};

int main(){
    struct chardata data[4] = {
        {"Mario", 10, 80},
        {"Luigi", 20, 75},
        {"Toad", 5, 90},
        {"Bowser", 0, 60}
    };

    int maxspeed = 0;
    int winner_index = 0;
    for (int i = 0; i<4; i++){
        if(maxspeed <= data[i].speed){
            maxspeed = data[i].speed;
            winner_index = i;
        }
    }

    printf("Winner: %s, Speed:%d", data[winner_index].name, maxspeed);
    return 0;
}