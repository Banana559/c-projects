#include <stdio.h>

struct students
{ 
    int magica;
    int supera;
};

int main (){


    struct students class[4] = { 
        {5, 0},    
        {4,5},
        {7,8},
        {1,9}   };

        int maxmagica = 0;
        int maxsupera = 0;


        for(int i = 0; i<4; i++)
        if (class[i].magica >= maxmagica){
            maxmagica = class[i].magica;
        }

        for(int k = 0; k<4; k++)
        if (class[k].supera >= maxsupera){
            maxsupera = class[k].supera;
        }

        printf("Maxmagica:%d   \nMaxsuperaL:%d",maxmagica, maxsupera );
return 0;

}

