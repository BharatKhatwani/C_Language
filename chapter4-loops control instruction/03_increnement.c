#include<stdio.h>

int main(){
    int i =5;
    // printf("The value before i++ is %d\n",i++);
    // printf("The value i after is %d\n", i);
    //  i++;                 //pehle print fir increment    {pre increment}
  
//      printf("The value before i is %d\n",++i);
//      printf("The value after i is %d\n" , i);
//       //--> increments i by 10
// ++i;                                                               // phle incrtenement then print    {post increment}

// printf("The value of before  i is %d\n",i--);
// printf("The value i after is %d\n", i);
// i--;                                                                  // phle print fir increment
  
printf("The value of before  i is %d\n",--i);
printf("The value i after is %d\n", i);
--i;                                                                     // phle increnement then print

//                              i-- ko i -1 bhi bolta ha 

    return 0;
}