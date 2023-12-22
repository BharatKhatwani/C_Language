#include<stdio.h>
//void helloworld();         // function protype
// void indian();
// void france();
int sum ( int a , int b);
int main(){
    //char ch ;

//    for(char ch ='a'; ch<='z'; ch++){
//     printf("%c\n",ch);
//    }
//    printf("hello");
//    char ch = 'a\n';
//    while(ch<='z'){
//     printf("%c\n",ch);
//     ch ++;
//    }
//    int i =1 ;
//    do{
//     printf("%d\n",i);
//     i++;
//    }while(i<=10);

// int n;

// printf("enter the number\n");
// scanf("%d",&n);
// int sum =0;
// for (int i =1; i<=n;i++){
//     sum =sum +i;
   
// }
//  printf("sum is %d\n",sum);
// for(int i=0; i <=5; i++){
//     if(i==3){
//         continue;
//     }
//     printf("%d\n",i);
// }


// for(int i =0; i<=50;i++){
//     if(i%2 !=0){
//         printf("%d\n",i);
//     }
// }

// int n;
// printf("enter the fact\n");
// scanf("%d",&n);
// int fact =1;
// for(int i =1; i<=n ; i++){
//     fact =fact * i;
// }
// printf("the final factorial will be %d",fact);
// helloworld();            // function calling


// printf("enter i for indian and for france\n");
//     char ch;
//     scanf("%c",&ch);
// if (ch =='i'){
//     indian();

// }
// else if(ch == 'f'){
//     france();
// }
// else{
//     printf("invalid");
//}


int a,b;
printf("enter the value of a \n");
scanf("%d",&a);
printf("Enter the value of b \n ");
scanf("%d",b);
 sum(a,b);
//printf("sum is :%d\n", a,b,s);
     return 0;
 }
//  void helloworld(){           // function definition
// printf("my name is bharat khatwani");
//  }
// void indian(){
// printf("namaste");
// }
//  void france(){
//     printf("bonjour");
//  }

int sum (int a,int b){
return a+b;
}