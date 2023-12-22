#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("newbharat.txt","w");// r read w to create a new text file
    if (fptr == NULL){
printf("file doesn't exist");
}
else {
fclose (fptr);
}
    
    return 0;
}

/*
mode
"r" = open to read
"rb" = open to read in binary
"w"= open to write
"wb" = open to write in binary
"a" = open to append
file nhi bnaya or naam bhi likhna ha file in under null store ho jayega

append it is usedd the word in the file;

 */