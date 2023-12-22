#include<stdio.h>
#include<string.h>

struct student{
  int rollno;
  float cgpa;
  char name[100];

};
int main(){
    struct student s1;
        s1.rollno = 40;
        s1.cgpa = 9.7;
       // s1.name; not done yet 
       strcpy(s1.name,"bharat");
        printf("%d\n",s1.rollno);
        printf("%f\n", s1.cgpa);
        printf("%s\n",s1.name);

        struct student s2;
        s2.rollno = 34;
        s2.cgpa = 8.9;
        strcpy (s1.name ,"harsh");
        printf("%d\n",s1.rollno);
        printf("%f\n",s1.cgpa);

        printf("%s",s1.name);

    
    return 0;
}