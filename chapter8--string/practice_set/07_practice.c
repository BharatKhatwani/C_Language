#include<stdio.h>
void dencrypt(char *c){
    char *ptr = c;
    while(*ptr!= '\0'){
        *ptr = *ptr -1;
        ptr++;
    }
}
int main(){
    char c[] = "cibsbu";                                       // in practice 7 we are put for answer of different question 
    dencrypt(c);
    printf("dencrypted string is :  %s" , c);
    return 0;
}