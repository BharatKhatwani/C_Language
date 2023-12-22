#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen ("bharat.txt","w");

    
    fprintf(fptr , "%c",'B');
    fprintf(fptr,"%c",'o');
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'s');
    fclose(fptr);
     
    return 0;
}