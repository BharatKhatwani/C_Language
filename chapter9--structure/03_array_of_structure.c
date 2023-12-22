#include <stdio.h>
#include <string.h>

struct empolyee
{
    int code;
    float salary;
    char name[100];
};
int main()
{
    struct empolyee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.45;
    strcpy(facebook[0].name, "bharat");

    facebook[1].code = 101;
    facebook[1].salary = 90.45;
    strcpy(facebook[1].name, "henry");

    facebook[2].code = 102;
    facebook[2].salary = 110.45;
    strcpy(facebook[2].name, "hero");
    printf ("%d\n",facebook[1].code);
    printf("Done");

    return 0;
}