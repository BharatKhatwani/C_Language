#include<stdio.h>
void checkcar(char str[], char ch);

int main(){
    char str[] = "Shradha";
    printf("vowel are : %d",countVowels(str));
    
}
void checkChar(char str[],char ch){
    for(int i =0; str[i] != '\0';i++){
        if(str[i] == ch ){
            printf("character is pressent !");
            return;
        }
    }
}