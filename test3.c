#include <stdio.h>
#include <string.h>

struct Pilots{
    char name[20];
    int sync;
};

void swap_Pilots(struct Pilots *p1, struct Pilots *p2){
    struct Pilots temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    struct Pilots Pilot1 = {"Asuka", 95};
        struct Pilots Pilot2 = {"Shinji", 40};




        swap_Pilots(&Pilot1, &Pilot2);

        printf("Unit01: %s, Sync: %d\n", Pilot1.name, Pilot1.sync);
        printf("Unit02: %s, Sync: %d", Pilot2.name, Pilot2.sync);
        return 0;
    }

  