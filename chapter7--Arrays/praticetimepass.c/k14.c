#include <stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]);

int main() {
    // char name[100];
    // fgets(name, 100, stdin);
    // printf("length is: %d", countLength(name));

    char name[] = "aman";
    int length = strlen(name);
    printf(" length is %d",length);
    return 0;
}

int countLength(char arr[]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count - 1;
}
