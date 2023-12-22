#include <stdio.h>

int main()
{
    char s[34];
    printf("enter your name  :");
    //gets(s);                                        // just change the value of scanf to gets
    fgets(s, 100,stdin);                                 // now a day we use fgets in place of gets
    
    
    puts(s);                                     
    printf("your name is %s", s);
    return 0;
}