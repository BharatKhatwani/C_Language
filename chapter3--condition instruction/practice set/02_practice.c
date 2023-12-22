#include<stdio.h>

int main(){
    int physics,chemistry,maths;
float total;
    printf("Enter physics Marks\n");
    scanf("%d", &physics);

printf("Enter  chemistry Marks\n");
    scanf("%d",   &chemistry);


    printf("Enter maths Marks\n");
    scanf("%d", &maths);
total = (physics + maths +chemistry )%100;
if((total<40) || physics<33 || maths<33 || chemistry<33){
    printf("Your total percentage is %f and you are failed", total);
} else
{
printf("Your total percentage is %f and you are pass\n",total);

}

    return 0;
}