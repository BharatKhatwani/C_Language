#include<stdio.h>

struct vector{
    int x;
    int y;

};
int main(){
     struct vector  v1,v2;
    v1.x =34;
    v1.y = 54;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
   
   v2.x =3456;
    v2.y = 5487;
    printf("X dim v2.x is  %d and Y dim v2.y is %d\n", v2.x, v2.y);
   
    
    return 0;
}

/*secreat tip for changing the value of multiple number
first press control n then control f changing the value of it */