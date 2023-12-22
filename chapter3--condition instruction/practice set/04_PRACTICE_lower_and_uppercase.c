#include<stdio.h>

int main(){
    // it is a sky value 97-122 =a-z
    char ch;
    printf("Enter the character \n");
    scanf("%c", &ch);
    // if(ch<=122 && ch>=97){
    //     printf("It is lowercase ");
    // }
    // else{
    //     printf("It is not lowercase");
    // }
//   SECOND WAY OF CASES

if(ch >= 'A' && ch <= 'Z'){
printf("upper case\n");
}
else if(ch >= 'a' && ch <= 'z'){
    printf("lower case\n");
}
else{
    printf("not english letter\n");
}
    return 0;
}