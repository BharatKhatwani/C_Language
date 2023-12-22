#include<stdio.h>

 int main(){
//     int i =34;
//     int *ptr = &i;
//     printf("The value of ptr is %u\n", ptr);
   // ptr--;
    
    char c = 34;
    char *ptr = &c;
printf("The value of ptr is %u\n" , ptr);
    ptr++;
    // ptr++;
    // ptr++;                                                 // char 1 byte ka hota ha 
    printf("The value of ptr is %u\n", ptr);
ptr--;
printf("The value of ptr is %u\n", ptr);

// float  f = 3.4;
//    float *ptr = &f;
// printf("The value of ptr is %u\n" , ptr);
//     ptr++; // plus4
//    printf("the value of ptr is %u\n", ptr);
//     ptr--; // plus 4
//     // ptr++;
//     // ptr++;
//     printf("The value of ptr is %u\n", ptr);

    return 0;
} 
// pointer  me jitana byte multiple jop plus  hota pointer +1 hota ha ;
// ++ or -- se value four time less ho jati ha; byte ke karan
// char 1 byte ka hota ha byte 4 ka hota ha !!
// ptr +1 me ek inkiment aata ha !!
