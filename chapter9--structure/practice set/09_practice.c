#include<stdio.h>
 typedef struct date{                                       // late homework hour complete...
    int date;
    int month;
    int year;
    int hour ;
    int min;

 }date;
 void display(date d){
    printf("The date is : %d/%d/%d\n", d.date,d.month,d.year , d.hour , d.min);
 }
int datecmp(date d1, date d2){
    //  make decision on the basis of year comparison
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
//  make decision on the basis of month comparison

     if(d1.month>d2.month){
        return 1;
    }
  if  (d1.month<d2.month){
        return -1;
    }
    //  make decision on the basis of date comparison

if(d1.date>d2.date){
        return 1;
    }
  if  (d1.date<d2.date){
        return -1;
    }
    //  make decision on the basis of hour comparison
if(d1.hour>d2.hour){
        return 1;
    }
  if  (d1.hour<d2.hour){
        return -1;
    }
if(d1.min>d2.min){
        return 1;
    }
  if  (d1.min<d2.min){
        return -1;
    }

    return 0;
  }

int main(){
    date d1 ={5,1,22,23};
    date d2 ={5,01,22,22};              // puri date nhui aa rhi ha pta nhi kyu
    display(d1);
    display(d2);
int a = datecmp(d1,d2);
printf("Date comparison function returns: %d" , a);

    return 0;
}
