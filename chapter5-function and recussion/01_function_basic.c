#include<stdio.h>
void display();            //function protype for --> c complier!! (1)
int main(){
     int a;
     printf("bharat khatwani\n");
    printf("inn\n");
    display(); 
    display();   //function call (3)
    printf("Display fuction finished its work\n");
    
    return 0;                      // aap void se sath  display or printhello sb kuch skta ha 
}                                   
 //function definition   (2)     0 // jab function 2 use karega to kam last wala bs jda baar print karega


void display
(){
    printf("This is display\n");
}