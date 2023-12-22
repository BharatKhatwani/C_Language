#include <stdio.h>
#include <string.h>

int main()
{
    char st1[45] = "bharatha";         // depend krta ha value pr konsi value konsa pr depend karegi it is printing 0 1 -1 value according the word comparing
    char *st2 = "bharat";
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);
    return 0;
}