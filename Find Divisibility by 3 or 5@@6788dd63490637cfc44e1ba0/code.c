#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d",&x);
  if((x%5==0)&&(x%3==0)){
    printf("Divisible by Both");
 }
 else if(x%3==0){
    printf("Divisible by 3");
 }
 else if(x%5==0){
    printf("Divisible by 5");
 }
 
 else{
    printf("Not Divisible");
 }
 return 0;
}