#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d",&x);
 if(x%3==0){
    printf("Divisble by 3");
 }
 else if(x%5==0){
    printf("Divisble by 5");
 }
 else if((x%5==0)&&(x%3==0)){
    printf("Divisble by Both");
 }
 else{
    printf("Not Divisble");
 }
 return 0;
}