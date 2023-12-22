#include<stdio.h>

int main(){
    char *changename = "bharat";
    puts(changename);
    changename = "khatwani";
    puts(changename);

    char greatchange [] = "bharta"; // c compliear arr me change nhi kr na dega aap ko pointers se change krna hoga 
puts(greatchange);
greatchange = "khatweani";
puts(greatchange);
    return 0;
}